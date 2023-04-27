#include <stdio.h>

#define ROW 3
#define COL 3
void matrixInput(int M[][COL]);
void matrixPrint(int M[][COL]);
void matrixMultiply(int M1[][COL], int M2[][COL], int res[][COL]);

int main()
{
    int M1[ROW][COL];
    int M2[ROW][COL];
    int product[ROW][COL];
    printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
    matrixInput(M1);
    printf("Enter elements in second matrix of size %dx%d\n", ROW, COL);
    matrixInput(M2);
    matrixMultiply(M1, M2, product);
    printf("Product of both matrices is : \n");
    matrixPrint(product);

    return 0;
}

void matrixInput(int M[][COL]) //Function to input elements in matrix from user

{
    int row, col;

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            scanf("%d", (*(M + row) + col));
        }
    }
}

void matrixPrint(int M[][COL]) //Function to print elements in a two-dimensional array
{
    int row, col;

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            printf("%d ", *(*(M + row) + col));
        }

        printf("\n");
    }
}

void matrixMultiply(int M1[][COL], int M2[][COL], int res[][COL]) //Function to multiply two matrices
{
    int row, col, i;
    int sum;


    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            sum = 0;
            for (i = 0; i < COL; i++)
            {
                sum += (*(*(M1 + row) + i)) * (*(*(M2 + i) + col));
            }
            *(*(res + row) + col) = sum;
        }
    }
}