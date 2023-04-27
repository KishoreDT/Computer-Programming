#include <stdio.h>
int main()
{
    int n,i,j,x;
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
        if (a[j]>x)
        {
            x=a[j];
        }
    }
    for(j=0;j<n;j++)
    {
        if (a[j]==x)
        {
            printf("The position of the lardest number of an array is %d",j);
        }
    }
    return 0;
}