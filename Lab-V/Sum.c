#include <stdio.h>
int main()
{
    int n,i,j,sum;
    printf("Enter a number of elemrnts in an array: ");
	scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        sum+=a[j];
    }
    printf("The sum of all the elements of an array is %d",sum);
    return 0;
}