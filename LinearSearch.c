#include<stdio.h>
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
    printf("Enter a number to be found: ");
	scanf("%d",&x);
    if(x>0)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==x)
            printf("Element found at index %d",j);
        }
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}