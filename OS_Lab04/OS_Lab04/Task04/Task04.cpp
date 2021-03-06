// Task04.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	TCHAR Buffer[256] = TEXT("Hello, my little friend");
	HANDLE hOut;

	DWORD dwNumberOfBytes;
	BOOL pr2 = 0;

	TCHAR stdPath[100] = TEXT("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\1\\file.txt");
	TCHAR stdPathB[100] = TEXT("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\2\\my_file.txt");
	TCHAR Rename[100] = TEXT("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\2\\rename.txt");



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
		printf("Created");
		getchar();
		CloseHandle(hOut);
	}
	BOOL pr = CopyFile(stdPath, stdPathB, pr2);
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

	BOOL pr_del = DeleteFile(stdPath);
	if (pr_del)
	{
		printf("DELETED");
		getchar();

	}
	else
	{
		printf(" NOT DELETED");
		getchar();

	}

	//Rename
	BOOL pr_rename = MoveFile(stdPathB, Rename);
	if (pr_rename)
	{
		printf("Rename");
		getchar();
		ReadFile(hOut, Buffer, 256, &dwNumberOfBytes, NULL);
		printf("DataRead!");
		getchar();
		CloseHandle(hOut);

	}
	else
	{
		printf(" NOT Rename");
		getchar();

	}

	return 0;
}

