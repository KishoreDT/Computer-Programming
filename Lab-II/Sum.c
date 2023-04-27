#include<stdio.h>
int main()
{
    int m,num,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num > 0)
    {
        m = num % 10;
        sum+=m;
        num = num / 10;
    }
    printf("Sum of digits is %d",sum);
    return 0;
}