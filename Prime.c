#include<stdio.h>
int prime(int n);
int main()
{
    int n,a;
    printf("Enter a number:");
    scanf("%d",&n);
    a=prime(n);
    if(a==1)
        printf("It is not a prime number");
    else
        printf("It is a prime number");
    return 0;
}
int prime(int n)
{
    int i;
    if(n>1)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                return 1;
            else
                return 0;
        }
    }
}
