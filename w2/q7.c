//Program 7: Orange Level
#include <stdio.h>
#define pie 3.14

int main() {
	printf("Program 7:Output\n");
	float radius,height,volume;
	printf("Enter radius: ");
	scanf("%f",&radius);
	printf("Enter height: ");
	scanf("%f",&height);
	volume=radius*radius*height*pie/3;
	printf("Volume= %.2f\n",volume);
	return 0;
}
