// WriteAndReadTextFile.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	FILE* fp;
	char str[80] = "glad to hear from you";
	if ((fp = fopen("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\c_api.txt", "wt")) == NULL)
	{
		puts("Opening failed");
		getchar();
	}
	else
	{
		fputs(str, fp);
		int z = fclose(fp);

		fp = fopen("D:\\study3course\\OperatingSystem\\OS_Labs\\OS_Lab04\\c_api.txt", "rt");
		fgets(str, 79, fp);
		puts(str);
		z = fclose(fp);
		getchar();
	}
	return 0;
}


