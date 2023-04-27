#include<stdio.h>
int main()
 {
    int m;
	printf("Enter your marks out of 100:");
	scanf("%d",&m);
	if (m>=93 && m<=100)
	    printf("Your Grade is O"); //Marks between 93 to 100, your Grade is O 
	else if(m>=85 && m<=92)
	    printf("Your Grade is A+"); //Marks between 85 to 92, your Grade is A+
	else if(m>=78 && m<=84)
	    printf("Your Grade is A"); //Marks between 78 to 84, your Grade is A
	else if(m>=71 && m<=77)
	    printf("Your Grade is B+"); //Marks between 71 to 77, your Grade is B+
	else if(m>=64 && m<=70)
	    printf("Your Grade is B"); //Marks between 64 to 70, your Grade is B
	else if(m>=57 && m<=63)
	    printf("Your Grade is C"); //Marks between 57 to 63, your Grade is C
	else if(m>=50 && m<=56)
	    printf("Your Grade is P"); //Marks between 50 to 56, your Grade is A
	else if(m<50)
	    printf("Your Grade is F"); //Marks below 50, your Grade is F
    return 0;
 }