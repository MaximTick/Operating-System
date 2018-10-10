// ReadFileAPI.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string.h>
#include <stdio.h>
#include "windows.h"



int _tmain(int argc, _TCHAR* argv[])
{

	TCHAR Buffer[256];
	HANDLE hIn;
	DWORD dwNumberOfBytes;
	FILE* fp;


	TCHAR stdPath[100] = TEXT("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\1.txt");

	hIn = CreateFile(stdPath, GENERIC_READ, 0, NULL,
		OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

	if (hIn == INVALID_HANDLE_VALUE) {
		printf("ERROR %x \n", GetLastError());
		getchar();

		return 2;
	}

	else
	{
		ReadFile(hIn, Buffer, 256, &dwNumberOfBytes, NULL);
		printf("DataRead!");
		getchar();
		CloseHandle(hIn);
	}

	return 0;
}


