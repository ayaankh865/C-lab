//Program 3: Orange Level
#include <stdio.h>

int main(){
	printf("Program 3- Output:\n");
	int choice;
	float hrs,rate,total,discount;
	printf("===== PARKING BILLING SYSTEM =====\n");
	printf("1. Two-Wheeler\n");
	printf("2. Car\n");
	printf("3. bus\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch (choice){
	case 1:
		rate=10;
		break;
	case 2:
		rate=30;
		break;
	case 3:
		rate=50;
		break;
	case 4:
		printf("Thank you for using Parking System.\n");
		break;
	default:
		printf("Invalid vehivle selected.\n");
		return 0;
	}
	printf("Enter number of hours parked: ");
	scanf("%f",&hrs);
	if (hrs <= 0) {
		printf("Invalid parking duration.\n");
		return 0;
	}
	total = rate * hrs;
	if (hrs > 5) {
		discount = 0.10 * total;
		total = total- discount;
		printf("10%% discount applied.\n");
	}
	printf("Total Parking Fee: %.2f\n", total);
	return 0;
}
