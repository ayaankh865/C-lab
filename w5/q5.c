//Program 5: - Jack Level
#include <stdio.h>

int main(){
	printf("Program 5- Output:\n");
	int a[3][3];
    int rowSum, colSum;
    int mainDiag = 0, secDiag = 0;
    printf("Enter elements of 3 x 3 matrix:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nSum of each row:\n");
    for(int i = 0; i < 3; i++)
    {
        rowSum = 0;
        for(int j = 0; j < 3; j++)
        {
            rowSum += a[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);
    }
    printf("\nSum of each column:\n");
    for(int j = 0; j < 3; j++)
    {
        colSum = 0;
        for(int i = 0; i < 3; i++)
        {
            colSum += a[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, colSum);
    }
    for(int i = 0; i < 3; i++)
    {
        mainDiag += a[i][i];
        secDiag += a[i][2 - i];
    }
    printf("\nSum of main diagonal elements = %d\n", mainDiag);
    printf("Sum of secondary diagonal elements = %d\n", secDiag);
    return 0;
}
