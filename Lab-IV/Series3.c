#include <stdio.h>

float exponential(int n, float x)
{
	float sum = 1.0f; // initialize sum of series
	for (int i = n - 1; i > 0; --i )
    {
        sum = 1 + x * sum / i;
    }
	return sum;
}

// Driver program to test above function
int main()
{
	float x,n;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of n: ");
    scanf("%f",&n);
	printf("e^x = %f", exponential(n, x));
	return 0;
}
