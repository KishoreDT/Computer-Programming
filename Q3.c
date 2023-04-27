#include <stdio.h>

void cal(int ndays)
{
    int years, months, days;
    years = ndays / 365;
    months = (ndays - years *365) / 30;
    days = (ndays - years * 365 - months*30);
    printf("Years: %d Months: %d Days: %d",months,years,days);
}

void main()
{
    int n;
    printf("Enter the number of days:");
    scanf("%d", &n);
    cal(n);
}