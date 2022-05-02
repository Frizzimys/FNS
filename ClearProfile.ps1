##[Ps1 To Exe]
##
##Kd3HDZOFADWE8uK1
##Nc3NCtDXThU=
##Kd3HFJGZHWLWoLaVvnQnhQ==
##LM/RF4eFHHGZ7/K1
##K8rLFtDXTiW5
##OsHQCZGeTiiZ4tI=
##OcrLFtDXTiW5
##LM/BD5WYTiiZ4tI=
##McvWDJ+OTiiZ4tI=
##OMvOC56PFnzN8u+Vs1Q=
##M9jHFoeYB2Hc8u+Vs1Q=
##PdrWFpmIG2HcofKIo2QX
##OMfRFJyLFzWE8uK1
##KsfMAp/KUzWJ0g==
##OsfOAYaPHGbQvbyVvnQX
##LNzNAIWJGmPcoKHc7Do3uAuO
##LNzNAIWJGnvYv7eVvnQX
##M9zLA5mED3nfu77Q7TV64AuzAgg=
##NcDWAYKED3nfu77Q7TV64AuzAgg=
##OMvRB4KDHmHQvbyVvnQX
##P8HPFJGEFzWE8tI=
##KNzDAJWHD2fS8u+Vgw==
##P8HSHYKDCX3N8u+Vgw==
##LNzLEpGeC3fMu77Ro2k3hQ==
##L97HB5mLAnfMu77Ro2k3hQ==
##P8HPCZWEGmaZ7/K1
##L8/UAdDXTlaDjofG5iZk2V3rUG0/UuGUuqOqwY+o7NbLsjHxXJgob3pEqniyAVO4OQ==
##Kc/BRM3KXhU=
##
##
##fd6a9f26a06ea3bc99616d4851b372ba
Set-ExecutionPolicy RemoteSigned
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