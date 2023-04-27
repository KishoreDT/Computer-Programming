#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s[100],c,s2=0,s1=0,x=0;
    float s3;
    srand((unsigned) time(0));
    for(int i = 0; i<100; i++)
    {
        s[i]=(rand() % 200 + 1);
    }
    for(int j = 0; j<100; j++)
    {
        c=(rand() % 200 + 1);
        for(int j1 = 0; j1<100; j1++)
        {
            if (s[j1]==c){
                ++s2;
                x+=(j1+1);
                break;
            }
        }
        s1+=1;
    }
    s3=s2;
    printf("The number of searched completed: %d\n",s1);
    printf("The number of successful searches %d\n",s2);
    printf("The percentage of successful searches %.1f%%\n",s3);
    printf("The average number of tests per search: %d",x/100);
    return 0;
}