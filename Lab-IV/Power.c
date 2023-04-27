#include <stdio.h>
int power(int x, int n)
{
    if (n!= 0)
        return (x * power(x, n - 1));
    else
        return 1;
}
int main() {
    int x, n, result;
    printf("Enter base number: ");
    scanf("%d", &x);
    printf("Enter power number: ");
    scanf("%d", &n);
    result = power(x,n);
    printf("%d^%d = %d", x,n,result);
    return 0;
}
