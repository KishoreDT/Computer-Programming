#include <stdio.h>
const double PI = 3.142;
//will return the sum of cos(x)
double series(double x, int n) {
    x = x * (PI / 180.0);
    double result = 1;
    double s = 1, fact = 1, pow = 1;
    for (int i = 1; i < 5; i++)
    {
        s = s * -1;
        fact = fact * (2 * i - 1) * (2 * i);
        pow = pow * x * x;
        result = result + s * pow / fact;
    }
    return result;
}

int main()

{

    float x,n,result;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of n: ");
    scanf("%f",&n);
    result=series(x,n);
    printf("Value of series cos (%.2f) is: %f",x,result);
    return 0;
}
