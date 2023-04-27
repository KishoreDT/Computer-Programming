#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, hcf, i;
	printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
	// Finding HCF
	for(i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		hcf = i;
	}
	// Making Decision
	if(hcf == 1)
	printf("%d and %d are CO-PRIME NUMBERS.", a, b);
	else
	printf("%d and %d are NOT CO-PRIME NUMBERS.", a, b);
	getch();
	return(0);
}