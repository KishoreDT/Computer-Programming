#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
	scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("2*3=6");
        break;
    case 2:
        printf("2+3=5");
        break;
    case 3:
        printf("4+6=10");
        break;
    case 4:
        printf("4/5=0.8");
        break;
    default:
        printf("Error! operator is not correct");
        break;
    }
    return 0;
}