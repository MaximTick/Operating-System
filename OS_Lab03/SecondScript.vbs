Option Explicit
Dim WshShell, objEnv

Set WshShell = CreateObject("WScript.Shell") 'объект оболочка для связи с ядром ОС через оболочку - доступ к функциям ОС
Set objEnv = WshShell.Environment("User")  'объект для доступа к системному окружению Process

objEnv("my_new_file") = "notepad.exe my_new_file.txt"
WshShell.Run objEnv("my_new_file")