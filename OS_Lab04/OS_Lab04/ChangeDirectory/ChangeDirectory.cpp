// ChangeDirectory.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string.h>
#include <stdio.h>
#include "windows.h"
#include "iostream"


int _tmain(int argc, _TCHAR* argv[])
{

	TCHAR Buffer[256];
	TCHAR Buffer2[] = TEXT("D:\study3course\OperatingSystem");
	DWORD dwResult = GetCurrentDirectory(256, Buffer);
	std::wcout << "Dir: " << Buffer << '\n';


	BOOL b = SetCurrentDirectory(Buffer2);

	dwResult = GetCurrentDirectory(256, Buffer);
	std::wcout << "Dir: " << Buffer << '\n';
	getchar();


	return 0;
}


