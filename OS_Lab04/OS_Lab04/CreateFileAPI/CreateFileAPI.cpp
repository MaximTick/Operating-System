// CreateFileAPI.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string.h>
#include <stdio.h>
#include "windows.h"

int _tmain(int argc, _TCHAR* argv[])
{

	TCHAR Buffer[256] = TEXT("Glad to hear from You");
	DWORD nLenCurDir;
	HANDLE hOut;

	FILE* fp;


	TCHAR stdPath[30] = TEXT("e:\work\my_api2.txt");

	hOut = CreateFile(stdPath, GENERIC_WRITE, 0, NULL,
		CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

	if (hOut == INVALID_HANDLE_VALUE) {
		printf("ERROR %x \n", GetLastError());
		getchar();

		return 2;
	}

	else
	{
		//nLenCurDir = GetCurrentDirectory(256, Buffer);
		// WriteFile(hOut, Buffer, 256, NULL, NULL );
		printf("Created");
		getchar();
		CloseHandle(hOut);
	}

	return 0;
}

