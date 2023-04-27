#include<stdio.h>
int main()
{
    double n;
    printf("Enter a number:");
	scanf("%lf",&n);
    //Checking the value
    if(n>=0 && n<=100)
    printf("The cost is 5.00");
    else if(n>100 && n<=500)
    printf("The cost is 8.00");
    else if (n>500 && n<=1000)
    printf("The cost is 10.00");
    else
    printf("The cost is 12.00");
	return 0;
}