// DeleteFile.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <string.h>
#include <stdio.h>
#include "windows.h"
#include "iostream"


int _tmain(int argc, _TCHAR* argv[])
{

	TCHAR Buffer[256];
	HANDLE hIn;
	DWORD dwNumberOfBytes;

	TCHAR stdPathA[30] = TEXT("e:\\work\\my_api3.txt");


	BOOL pr = DeleteFile(stdPathA);
	if (pr)
	{
		printf("DELETED");
		getchar();

	}
	else
	{
		printf(" NOT DELETED");
		getchar();

	}

	return 0;
}


