// MoveFile.cpp: определяет точку входа для консольного приложения.
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
	FILE* fp;
	BOOL pr2 = 0;

	TCHAR stdPathA[30] = TEXT("e:\\work\\my_api2.txt");
	TCHAR stdPathB[30] = TEXT("e:\\work\\my_api3.txt");

	BOOL pr = MoveFile(stdPathA, stdPathB);
	if (pr)
	{
		printf("MOVED");
		getchar();

	}
	else
	{
		printf(" NOT MOVED");
		getchar();

	}

	return 0;
}


