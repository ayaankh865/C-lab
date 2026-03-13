//Program 3: Orange Level – Employee Salary Breakup
#include <stdio.h>

int main() {
	printf("Program 3:Output\n");
	char emp_id;
	float basic_salary,hra,da,gross_salary;
	printf("Enter Employee ID: ");
	scanf("%s",&emp_id);
	printf("Enter basic salary: ");
	scanf("%f",&basic_salary);
	hra=0.2*basic_salary;
	da=0.15*basic_salary;
	gross_salary=basic_salary+hra+da;
	printf("House Rent Allowance= %.2f\n",hra);
	printf("Dearness Allowance= %.2f\n",da);
	printf("Gross Salary= %.2f\n",gross_salary);
	return 0;
}
