#include<stdio.h>
 
int main()
{
    int n,i,j,sum,avg;
    printf("Enter number of students in a class: ");
    scanf("%d",&n);
    int a[n],b[n],c[n],d[n],e[n];
    for(i=0;i<n;i++)
    {
        printf("Enter marks of student %d: ",i+1);
        scanf("%d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i]);
    }
    for(j=0;j<n;j++)
    {
        sum=(a[i]+b[i]+c[i]+d[i]+e[i])/5;
        printf("The average of student %d is %d\n",j+1,sum);
        avg+=sum;
    }
    printf("The class average is %d",avg/n);
    return 0;
}