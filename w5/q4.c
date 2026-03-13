//Program 4: - Orange Level
#include<stdio.h>
int main(){
	printf("Program 4- Output:\n");
	int seat[5][4];
    int booked = 0, available = 0;
    printf("Enter seat availability (1 = Booked, 0 = Available):\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Row %d:\n", i + 1);
        for(int j = 0; j < 4; j++)
        {
            printf("Seat %d: ", j + 1);
            scanf("%d", &seat[i][j]);
            if(seat[i][j] == 1)
                booked++;
            else
                available++;
        }
    }
    printf("\nSeat Availability Matrix:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", seat[i][j]);
        }
        printf("\n");
    }
    printf("\nTotal Booked Seats = %d\n", booked);
    printf("Total Available Seats = %d\n", available);
    return 0;
}
