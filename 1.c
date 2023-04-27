#include <stdio.h>
int main()
{
	FILE *fp;
	char name[10];
	double balance;
	int account;
	fp = fopen("C:\1.txt", "w");
	if (fp == NULL)
   	{
		printf("File could not be opened\n");
	}
	else
	{
		printf("Enter one account, name, and balance.\n");
		scanf("%d%s%lf", &account, name, &balance);
		fprintf(fp,"%d%s%lf",account,name,balance);
		fclose(fp);
	}
	return 0;
}
