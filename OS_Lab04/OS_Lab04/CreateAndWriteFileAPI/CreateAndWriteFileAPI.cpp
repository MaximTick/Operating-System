// CreateAndWriteFileAPI.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string.h>
#include <stdio.h>
#include "windows.h"

int _tmain(int argc, _TCHAR* argv[])
{

	TCHAR Buffer[256] = TEXT("Glad to hear from You\n");
	HANDLE hOut;
	DWORD dwNumberOfBytes;




	FILE* fp;


	TCHAR stdPath[30] = TEXT("e:\\work\\my_api2.txt");
	hOut = CreateFile(stdPath, GENERIC_WRITE, 0, NULL,
		CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

	if (hOut == INVALID_HANDLE_VALUE) {
		printf("ERROR %x \n", GetLastError());
		getchar();

		return 2;
	}

	else
	{
		WriteFile(hOut, Buffer, 256, &dwNumberOfBytes, NULL);
		printf("Created and Written!");
		getchar();
		CloseHandle(hOut);
	}

	return 0;
}


