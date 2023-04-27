#include<stdio.h>
void fat(int n)
{
	int fact = 1;
	int x = 2;
	while (fact <= n)
	{
		printf("%d ",fact);
		fact = fact * x;
		x++;
	}
}

void main()
{
	int n;
    printf("Enter a number:");
    scanf("%d",&n);
	fat(n);
}