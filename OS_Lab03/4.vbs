Option Explicit
Dim WshShell, objEnv, file, fso
Set WshShell = CreateObject("WScript.Shell") 'объект оболочка для связи с ядром ОС через оболочку - доступ к функциям ОС
Set objEnv = WshShell.Environment("Process")  'объект для доступа к системному окружению Process

Set fso = WScript.CreateObject("Scripting.FileSystemObject")
Set file = fso.CreateTextFile("open_exel.bat")
file.WriteLine(" @echo off")
file.WriteLine("start Excel.exe")
file.Close

objEnv("bat") = "open_exel.bat"
WshShell.Run objEnv("bat")