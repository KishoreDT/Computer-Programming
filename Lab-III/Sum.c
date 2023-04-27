#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2==1) //Checks whether the number is even or even
        {
            sum+=n;
        }
    n-=1;
    }
    printf("The sum of odd numbers is %d",sum);
    return 0;
}