#include<stdio.h>
int Linear(int arr[], int l, int r, int x)
{
	if (r < l)
		return -1;
	if (arr[l] == x)
		return l;
	if (arr[r] == x)
		return r;
	return Linear(arr, l+1, r-1, x);
}

int main()
{
	int n,i,x;
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
	int index = Linear(a, 0, n-1, x);
	if (index != -1)
	printf("Element %d is present at index %d", x, index);
	else
		printf("Element %d is not present", x);
	return 0;
}
