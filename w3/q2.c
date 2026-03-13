//Program 2: Orange Level
#include <stdio.h>

int main(){
	printf("Program 2- Output:\n");
	int choice;
	float balance=50000,dep_amt,wid_amt;
	printf("********** ATM MENU **********\n");
	printf("1. Check Balance\n");
	printf("2. Deposit\n");
	printf("3. Withdraw\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch (choice){
	case 1:
		printf("Your current balance is: ₹%.2f\n",balance);
		break;
	case 2:
		printf("Enter amount to deposit: ");
		scanf("%f",&dep_amt);
		if (dep_amt>0){
			balance+=dep_amt;
			printf("Deposit Successful.\n");
			printf("Updated Balance: ₹%.2f\n",balance);
		}else{
			printf("Invalid Deposit Amount\n");
		}
		break;
	case 3:
		printf("Enter amount to withdraw: ");
		scanf("%f",&wid_amt);
		if (wid_amt<=balance){
		balance-=wid_amt;
		printf("Withdrawal Successful.\n");
		printf("Remaining Balance: ₹%.2f\n",balance);
		}
		else if(wid_amt>balance){
		printf("Insufficient Balance\n");
		}else{
		printf("Invalid Withdrawal Amount\n");
		}
		break;
	case 4:
		printf("Thank you for using our ATM.\n");
		break;
	default:
		printf("\nInvalid Choice. Please select between 1 and 4.\n");
	}
	return 0;
}
