//Program 8: Orange Level
#include <stdio.h>

int main() {
	printf("Program 8:Output\n");
	float f_temp,c_temp;
	printf("Enter temperature in Celsius: ");
	scanf("%f",&c_temp);
	f_temp=(c_temp*9/5)+32;
	printf("Temperature in Farenheit= %.2f\n",f_temp);
	return 0;
}
