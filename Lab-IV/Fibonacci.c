#include<stdio.h>
int Fibonacci(int n)
{
    if (n <= 1)
      return n;
    return Fibonacci(n-1) + Fibonacci(n-2);
}
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",Fibonacci(i));
    }
    getchar();
    return 0;
}