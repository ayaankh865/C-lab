//Program 3: Orange Level
#include<stdio.h>

int main(){
	printf("Program 3- Output:\n");
	int units[6];
    int total = 0;
    float average;
    int count = 0;
    printf("Enter electricity units consumed by 6 houses:\n");
    for(int i = 0; i < 6; i++)
    {
        printf("House %d: ", i + 1);
        scanf("%d", &units[i]);
        total += units[i];
        if(units[i] > 300)
        {
            count++;
        }
    }
    average = total / 6.0;
    printf("Total Units Consumed = %d\n", total);
    printf("Average Consumption = %.2f\n", average);
    printf("Number of houses consuming more than 300 units = %d\n", count);
    return 0;
}
