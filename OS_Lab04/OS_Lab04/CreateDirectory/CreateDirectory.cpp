// CreateDirectory.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string.h>
#include <stdio.h>
#include "windows.h"
#include "iostream"


int _tmain(int argc, _TCHAR* argv[])
{

	TCHAR Buffer[256];
	TCHAR Buffer2[] = TEXT("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\1");
	TCHAR Buffer3[] = TEXT("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\2");

	DWORD dwResult = GetCurrentDirectory(256, Buffer);
	std::wcout << "Dir: " << Buffer << '\n';

	BOOL b = SetCurrentDirectory(Buffer2);

	dwResult = GetCurrentDirectory(256, Buffer);
	std::wcout << "Dir: " << Buffer << '\n';



	if (CreateDirectory(Buffer3, NULL))
		std::wcout << "directory create" << '\n';
	else
		std::wcout << "error create directory" << '\n';

	if (CreateDirectory(Buffer2, NULL))
		std::wcout << "directory create2" << '\n';
	else
		std::wcout << "error create directory" << '\n';

	getchar();

	return 0;
}


