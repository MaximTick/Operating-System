'Processor Information
On Error Resume Next
DiskInfo =""
strComputer = "."
Set objWMIService = GetObject("winmgmts:" _
    & "{impersonationLevel=impersonate}!\\" & strComputer & "\root\cimv2")

Set colItems = objWMIService.ExecQuery("Select * from Win32_DiskDrive",,48)
DiskInfo = "Информация о жестком диске" & vbCrlf & vbCrlf

For Each objItem in colItems
    DiskInfo = DiskInfo & "Caption: " & objItem.Caption & vbCrLf 
    DiskInfo = DiskInfo & "CompressionMethod: " & objItem.CompressionMethod & vbCrLf     
    DiskInfo = DiskInfo & "ConfigManagerErrorCode: " & objItem.ConfigManagerErrorCode & vbCrLf     
    DiskInfo = DiskInfo & "ConfigManagerUserConfig: " & objItem.ConfigManagerUserConfig & vbCrLf     
    DiskInfo = DiskInfo & "CreationClassName: " & objItem.CreationClassName & vbCrLf     
    DiskInfo = DiskInfo & "DefaultBlockSize: " & objItem.DefaultBlockSize & vbCrLf     
    DiskInfo = DiskInfo & "Description: " & objItem.Description & vbCrLf     
    DiskInfo = DiskInfo & "DeviceID: " & objItem.DeviceID & vbCrLf     
    DiskInfo = DiskInfo & "ErrorCleared: " & objItem.ErrorCleared & vbCrLf     
    DiskInfo = DiskInfo & "ErrorDescription: " & objItem.ErrorDescription & vbCrLf     
    DiskInfo = DiskInfo & "ErrorMethodology: " & objItem.ErrorMethodology & vbCrLf     
    DiskInfo = DiskInfo & "Index: " & objItem.Index & vbCrLf     
    DiskInfo = DiskInfo & "InstallDate: " & objItem.InstallDate & vbCrLf     
    DiskInfo = DiskInfo & "InterfaceType: " & objItem.InterfaceType & vbCrLf     
    DiskInfo = DiskInfo & "LastErrorCode: " & objItem.LastErrorCode & vbCrLf     
    DiskInfo = DiskInfo & "Manufacturer: " & objItem.Manufacturer & vbCrLf     
    DiskInfo = DiskInfo & "MaxBlockSize: " & objItem.MaxBlockSize & vbCrLf     
    DiskInfo = DiskInfo & "MaxMediaSize: " & objItem.MaxMediaSize & vbCrLf     
    DiskInfo = DiskInfo & "MediaLoaded: " & objItem.MediaLoaded & vbCrLf     
    DiskInfo = DiskInfo & "MediaType: " & objItem.MediaType & vbCrLf     
    DiskInfo = DiskInfo & "MinBlockSize: " & objItem.MinBlockSize & vbCrLf     
    DiskInfo = DiskInfo & "Model: " & objItem.Model & vbCrLf     
    DiskInfo = DiskInfo & "Name: " & objItem.Name & vbCrLf     
    DiskInfo = DiskInfo & "NeedsCleaning: " & objItem.NeedsCleaning & vbCrLf     
    DiskInfo = DiskInfo & "NumberOfMediaSupported: " & objItem.NumberOfMediaSupported & vbCrLf     
    DiskInfo = DiskInfo & "Partitions: " & objItem.Partitions & vbCrLf     
    DiskInfo = DiskInfo & "PNPDeviceID: " & objItem.PNPDeviceID & vbCrLf
   
Next
   'MsgBox DiskInfo

Dim file, fso
Set fso = WScript.CreateObject("Scripting.FileSystemObject")
Set file = fso.CreateTextFile("System.txt")
file.WriteLine(DiskInfo)
file.Close
