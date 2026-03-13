//Program 4: Jack Level
#include <stdio.h>

int main(){
	printf("Program 4- Output:\n");
	int age,credit_score,int_rate;
	float income,loan_req,interest,total;
	printf("Enter Applicant Age: ");
	scanf("%d",&age);
	printf("Enter Annual Income: ");
	scanf("%f",&income);
	printf("Enter Requested Loan Amount: ");
	scanf("%f",&loan_req);
	printf("Enter Credit Score: ");
	scanf("%d",&credit_score);
	if (age>=21){
		if (income>=300000){
			if (credit_score >= 750) {
				 int_rate= 8;
			}else if (credit_score >= 650) {
				int_rate = 10;
			}else {
				printf("\nLoan Rejected: Credit score is too low.\n");
				return 0;
			}
			interest = loan_req*int_rate/100;
			total=loan_req+interest;
			printf("Loan Approved.\n");
			printf("Interest Rate: %d\n",int_rate);
			printf("Interest Amount: %.2f\n",interest);
			printf("Total Amount Payable: %.2f\n",total);
		}else{
			printf("Loan rejected.\nThe applicant must earn atleast ₹3,00,000.\n");
			return 0;
		}
	}else{
		printf("Loan rejected.\nThe applicant must be 21 years or older to apply.\n");
		return 0;
	}
}
