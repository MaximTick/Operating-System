// OS_Lab04.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string.h>
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{

	FILE* fp;
	char str[80];
	if ((fp = fopen("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\c_api.txt", "rt")) == NULL)
	{
		puts("Opening failed");
		getchar();
	}
	else
	{
		fgets(str, 79, fp);
		printf("read: %s", str);
		int z = fclose(fp);
		getchar();
	}
	return 0;
}


