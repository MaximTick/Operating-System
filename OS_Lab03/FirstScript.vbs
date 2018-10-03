Option Explicit
Dim Message, Title, Answ, z
Dim WshShell, objEnv
Set WshShell = CreateObject ("WScript.Shell") 'объект оболочка для связи с ядром ОС через оболочку - доступ к функциям ОС
Set objEnv = WshShell.Environment("Process")  'объект для доступа к системному окружению Process

Message = "System Information" & vbCrLf       'vbCrLf - перевод каретки влево и вниз
Message = Message & "PROMPT" & objEnv("PROMPT")& vbCrLf
Message = Message & "WinDir:" & objEnv("WINDIR") & vbCrLf
Answ = MsgBox ("Would you create your own var?(y/n)",vbYesNo,_
       "Answer, please") 
       
If answ = vbYes Then
objEnv("MyVar") = "This is your var"  'Своя переменная окружения
end If
'reading
Message="List of System vars" & vbCrLf 
For Each z in objEnv                'с помощью этого цикла выводим все переменные системного окружения
   Message = Message & z & vbCrLf
Next
Title="System Info."
MsgBox Message, vbOKOnly, Title 
