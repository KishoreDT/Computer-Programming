#include <stdio.h>
int main()
{
    int n,i,j,x,y,z;
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
        if (a[j]==0)
        {
            z+=1;
        }
        else if (a[j]<0)
        {
            x+=1;
        }
        else if (a[j]>0)
        {
            y+=1;
        }
    }
    printf("The number of elements less than zero = %d\n",x);
    printf("The number of elements greater than zero = %d\n",y);
    printf("The number of elements equal to zero = %d",z);
    return 0;
}