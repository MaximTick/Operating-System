// CurrentDirectory.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <string.h>
#include <stdio.h>
#include "windows.h"
#include "iostream"


int _tmain(int argc, _TCHAR* argv[])
{

	TCHAR Buffer[256];
	DWORD dwResult = GetCurrentDirectory(256, Buffer);
	std::wcout << "Dir: " << Buffer << '\n';
	getchar();





	return 0;
}


