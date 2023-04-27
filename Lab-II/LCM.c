#include <stdio.h>
int main() 
{
    int a,b,x;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    x= (a > b) ? a : b; // maximum number between a and b is stored in min
    do
    {
        if (x%a==0 && x%b==0) 
        {
            printf("The LCM of %d and %d is %d.",a,b,x);
            break;
        }
        ++x;
    }
    while (1);
    return 0;
}