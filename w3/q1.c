//Program 1: Banana Level
#include <stdio.h>

int main(){
	printf("Program 1 Output:\n");
	int roll;
	float total_fee,per_obtained,scho_per,scho_amt,final_fee;
	printf("Enter Student Roll Number: ");
	scanf("%d",&roll);
	printf("Enter Total Tuition Fee: ");
	scanf("%f",&total_fee);
	printf("Enter Percentage obtained in 1st Semester: ");
	scanf("%f",&per_obtained);
	if (per_obtained>=90){
	scho_per=100;
	}else if (per_obtained>=80 && per_obtained<=89){
		scho_per=75;
	}else if (per_obtained>=70 && per_obtained<=79){
		scho_per=50;
	}else if (per_obtained>=60 && per_obtained<=69){
		scho_per=25;
	}else{
		scho_per=0;
	}
	scho_amt=total_fee*scho_per/100;
	final_fee=total_fee-scho_per;
	printf("--- Scholarship Details ---\n");
	printf("Student Roll Number: %d\n",roll);
	printf("Scholarship Percentage: %.2f%%\n",scho_per);
	printf("Scholarship Amount: %.2f\n",scho_amt);
	printf("Final Fee to be Paid: %.2f\n",final_fee);
}
