#include <stdio.h>

#define MAX_SIZE 100
void inputArray(int * a, int size);
int search(int * a, int size, int toSearch);

int main()
{
    int array[MAX_SIZE];
    int size, toSearch, searchIndex;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    inputArray(array, size);
    printf("Enter element to search: ");
    scanf("%d", &toSearch);
    searchIndex = search(array, size, toSearch);
    if(searchIndex == -1)
        printf("%d does not exists in array.", toSearch);
    else
        printf("%d is found at %d position.", toSearch, searchIndex + 1);


    return 0;
}
void inputArray(int * a, int size) //Function to input elements in array
{
    int * aEnd = (a + size - 1);
    while(a <= aEnd)
    {
        scanf("%d", a++);
    }
}
int search(int * a, int size, int toSearch) //Function to seeach an element in an array
{
    int index = 0;
    int * aEnd = (a + size - 1);
    while(a <= aEnd && *a != toSearch) {
        a++;
        index++;
    }
    if(a <= aEnd)
        return index;
    
    return -1;
}