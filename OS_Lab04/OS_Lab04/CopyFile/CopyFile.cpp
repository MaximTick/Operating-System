// CopyFile.cpp: определяет точку входа для консольного приложения.
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

	TCHAR stdPathA[100] = TEXT("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\my_api2.txt");
	TCHAR stdPathB[100] = TEXT("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\my_api3.txt");

	BOOL pr = CopyFile(stdPathA, stdPathB, pr2);
	if (pr)
	{
		printf("COPIED");
		getchar();

	}
	else
	{
		printf(" NOT COPIED");
		getchar();

	}

	return 0;
}


