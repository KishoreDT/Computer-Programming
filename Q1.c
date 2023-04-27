#include<stdio.h>
int g(int m);
int main()
{
    int m,f;
    printf("Enter a number:");
    scanf("%d",&m);
    g(m);
    return 0;
}

int g(int m)
{
    while (m>1)
    {
        printf("%d ",m);
        if (m%2)
        {
            m=3*m+1;
        }
        else
        {
            m=m/2;
        }
    }
    printf("1");
}