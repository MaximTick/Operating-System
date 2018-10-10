Option Explicit
Dim WshShell, objEnv, file, fso

Set fso = WScript.CreateObject("Scripting.FileSystemObject")
Set file = fso.CreateTextFile("new_file.txt")
file.Close

Set WshShell = CreateObject("WScript.Shell") 'объект оболочка для связи с ядром ОС через оболочку - доступ к функциям ОС
Set objEnv = WshShell.Environment("User")  'объект для доступа к системному окружению User
objEnv("xcopy") = "XCOPY my_new_file.txt new_file.txt"
WshShell.Run objEnv("xcopy")
