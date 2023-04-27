#include <stdio.h>

#define MAX_SIZE 100
void inputArray(int *a, int size);
void printArray(int *a, int size);
void swapArray(int *sa, int *da, int size);

int main()
{
    int sa[MAX_SIZE];
    int da[MAX_SIZE];
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements in source array: ", size);
    inputArray(sa, size);
    printf("Enter %d elements in destination array: ", size);
    inputArray(da, size);
    printf("\n\nSource array before swapping: ");
    printArray(sa, size);
    printf("\nDestination array before swapping: ");
    printArray(da, size);
    swapArray(sa, da, size);
    printf("\n\nSource array after swapping: ");
    printArray(sa, size);
    printf("\nDestination array after swapping: ");
    printArray(da, size);
    return 0;
}

void inputArray(int *a, int size) //Function to input elements in array
{
    int *aEnd = (a + (size - 1));
    while(a <= aEnd)
        scanf("%d", a++);
}

void printArray(int *a, int size) //Function to print all the elements in array
{
    int *aEnd = (a + (size - 1));
    while(a <= aEnd)
        printf("%d, ", *(a++));
}


void swapArray(int * sa, int * da, int size) //Function used to swap elements of two array
{
    int * saEnd = (sa + (size - 1));
    int * daEnd   = (da + (size - 1));
    while(sa <= saEnd && da <= daEnd)
    {
        *sa ^= *da;
        *da   ^= *sa;
        *sa ^= *da;
        sa++;
        da++;
    }
}