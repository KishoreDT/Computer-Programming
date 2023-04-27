#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char* x, char* y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char* a, int l, int r,int n)
{
    int i,pv,n1,n2,result;
    if (l == r){
        pv=atoi(a);
        n1 = pv / 100;
        n2 = pv % 100;
        result=n1*n2;
        if(result==n)
        {
            printf("It is a Vampire Number\n");
        }
    }
    else {
        for (i = l; i <= r; i++) {
            swap((a + l), (a + i));
            permute(a, l + 1, r,n);
            swap((a + l), (a + i)); // backtrack
        }
    }
}

int main()
{
    int n,result,len;
    printf("Enter a Number: ");
    scanf("%d",&n);
    char a[100];
    sprintf(a,"%d",n);
    len = strlen(a);
    permute(a,0,len-1,n);
    return 0;
}
