#include<stdio.h>
 
int main()
{
 	int i, j, x, y, a[10][10];
 	printf("Please Enter Number of rows and columns: ");
 	scanf("%d %d", &i, &j);
 	printf("Please Enter the Matrix Elements\n");
 	for(x = 0; x < i; x++)
  	{
   		for(y = 0;y < j;y++)
    	{
            printf("Enter value of a[%d][%d]: ",x,y);
      		scanf("%d", &a[x][y]);
    	}
  	}
 	for(x = 0; x < i; x++)
  	{
  		printf("\n");
   		for(y = 0; y < j; y++)
    	{
    		if(x >= y)
    		{
    			printf("%d ", a[x][y]);
			}
			else
			{
				printf("0  ");
			}
   	 	}
  	}
  	
 	return 0;
}
