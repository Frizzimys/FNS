$Now = Get-Date
$Days = "1"
$TargetFolder = "C:\Users\veret\AppData\Local\Temp\"
$Extension = "*"
$LastWrite = $Now.AddDays(-$Days)
$Files = Get-Childitem $TargetFolder -Include $Extension -Recurse | Where{$_.CreationTime -le "$LastWrite" -and $_.LastWriteTime -le "$LastWrite"} | Sort-Object -Descending {$_.FullName.Split('\').Count},FullName
foreach ($File in $Files)
{
 if ($File -ne $NULL -and !$File.PSIsContainer)
 {
  write-host "Deleting File $File" -ForegroundColor "Magenta"
  Remove-Item $File.FullName -Force | out-null
 }
 elseif ($File -ne $NULL -and $File.PSIsContainer)
 {
        $FolderInfo = get-Childitem $File.FullName | Measure-Object
        if ($folderInfo.count -eq 0)
        {
            write-host "Deleting directory - $File" -foregroundcolor "green"
            Remove-Item $File.FullName -Force | out-null
        }
 }
 else
 {
  Write-Host "No more files to delete!" -foregroundcolor "Green"
 }
 }
 #удаляем пустые папки, не зависимо от времени создания
 $folderInfo=""
 $Folders = Get-Childitem $TargetFolder -Recurse | Where{$_.PSIsContainer} | Sort-Object -Descending {$_.FullName.Split('\').Count},FullName
 foreach ($Folder in $Folders)
 {
    if ($Folder -ne $null)
    {
        $FolderInfo = get-Childitem $Folder.FullName | Measure-Object
        if ($folderInfo.count -eq 0)
        {
            write-host "Deleting directory - $Folder" -foregroundcolor "yellow"
            Remove-Item $Folder.FullName -force | out-null
        }
    }
 }
 # Получение пути к скрипту
$ScriptFolder = $MyInvocation.MyCommand.Path.SubString(0,($MyInvocation.MyCommand.Path.Length - $MyInvocation.MyCommand.Name.Length))
# Формирование пути к лог-файлу
$LogFile = $ScriptFolder + $MyInvocation.MyCommand.Name.SubString(0,($MyInvocation.MyCommand.Name.Length - 4)) + ".log"
# Создание лог-файла
Out-File -FilePath $LogFile

# Указание папки профилей
$ProfileFolder = "C:\Users"
# Указание служебных папок
$ExcludedProfiles = "Default", "Default User", "Public", "All Users", "Administrator", "veret"

# Получение объектов из папки профилей
$SubDirs= Get-ChildItem $ProfileFolder -Force

# Обработка объектов из папки профилей
ForEach ($Dir in $SubDirs) {
   $LogMessage = $Nothing
   # Проверка, что объект существует и это папка
   If (Test-Path $Dir.FullName -PathType Container) {
       # Проверка, что профиль - это не служебная папка
       $NotDeleteFlag = $False
       ForEach ($ExcludedProfile in $ExcludedProfiles) {
           If ($Dir.Name -eq $ExcludedProfile) {
               $NotDeleteFlag = $True
           }
       }
       # Удаление профиля
       If ($NotDeleteFlag -eq $False) {
           # Формирование события для лога
           $LogMessage = get-date -uformat "%d.%m.%Y %H:%M:%S"
           $LogMessage += "`t"
           $LogMessage += $Dir.FullName + " is deleted."
           # Удаление папки
           #Remove-Item -Path $Dir.FullName -Force -Recurse
           $CmdLine = "cmd /c RD /S /Q """ + $Dir.FullName + """"
           Invoke-Expression -command $CmdLine
       }
       Else {
           # Формирование события для лога
           $LogMessage = get-date -uformat "%d.%m.%Y %H:%M:%S"
           $LogMessage += "`t"
           $LogMessage += $Dir.FullName + " is skipped as a service folder."
       }
   }
   Else {
       # Формирование события для лога
       $LogMessage = get-date -uformat "%d.%m.%Y %H:%M:%S"
       $LogMessage += "`t"
       $LogMessage += $Dir.FullName + " is skipped as a file."
   }
   # Запись события в лог-файл
   $LogMessage | Out-File -FilePath $LogFile -Append
}