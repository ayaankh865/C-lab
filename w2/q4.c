//Program 4: Orange Level- Coffee shop
#include <stdio.h>

int main() {
	printf("Program 4:Output\n");
	int no_coffee;
	float price,service,total,final_amount;
	printf("Enter number of coffee: ");
	scanf("%d",&no_coffee);
	printf("Enter price per coffee: ");
	scanf("%f",&price);
	total=no_coffee*price;
	service=total*0.05;
	final_amount=service+total;
	printf("Final amount= %.2f\n",final_amount);
	return 0;
}
