//Program 5: Banana Level – Vehicle Fuel Cost Calculator
#include <stdio.h>

int main() {
	printf("Program 5:Output\n");
	float total_distance,mileage,fuel_cost,fuel_req,total_cost;
	printf("Enter total distance to travel(kms): ");
	scanf("%f",&total_distance);
	printf("Enter mileage of the vehicle(km/L): ");
	scanf("%f",&mileage);
	printf("Enter cost of fuel per Liter: ");
	scanf("%f",&fuel_cost);
	fuel_req=total_distance/mileage;
	total_cost=fuel_req*fuel_cost;
	printf("Fuel required for the trip= %.2fL\n",fuel_req);
	printf("Total fuel cost= %.2f\n",total_cost);
	return 0;
}
