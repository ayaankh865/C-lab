//Program 1: Banana Level – Student Academic Summary
#include <stdio.h>

int main() {
	printf("Program 1:Output\n");
	char roll_no;
	float m1,m2,m3,m4,m5,total_marks,avg_marks;
	printf("Enter the Roll number of Student:");
	scanf("%s",&roll_no);
	printf("Enter the marks for subjects:");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	total_marks=m1+m2+m3+m4+m5;
	avg_marks=total_marks/5;
	printf("\ntotal marks=%.2f",total_marks);
	printf("\nAverage marks=%.2f\n",avg_marks);
	return 0;
}
