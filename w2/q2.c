//Program 2: Banana Level – Monthly Electricity Bill Estimation
#include <stdio.h>

int main() {
	printf("Program 2:Output\n");
	int units;
	float cost_per_unit,total_bill;
	printf("Enter number of units consumed:");
	scanf("%d",&units);
	printf("Enter cost per unit:");
	scanf("%f",&cost_per_unit);
	total_bill=cost_per_unit*units;
	printf("Total electricity bill= %.2f\n",total_bill);
	return 0;
}
