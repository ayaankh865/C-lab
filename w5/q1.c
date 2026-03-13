//Program 1: Banana Level 
#include <stdio.h>

int main(){
    printf("Program 1- Output:\n");
    float expense[7];
    float total = 0;
    int count = 0;
    printf("Enter expenses for 7 days:\n");
    for(int i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%f", &expense[i]);
        total += expense[i];
        if(expense[i] > 1000)
        {
            count++;
        }
    }
    printf("Total Expense = %.2f\n", total);
    printf("Number of days expense was above 1000 = %d\n", count);
    return 0;
}
