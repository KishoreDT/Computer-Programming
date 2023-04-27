#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter a number:");
	scanf("%d",&n);
    //Calculation of sum of the factors
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	if(n < sum)
		printf("It is a Abundant Number");
	else
		printf("It is not Abundant Number");
	return 0;
}