//Program 6: Banana Level – Simple Bank Account Transaction
#include <stdio.h>

int main() {
	printf("Program 6:Output\n");
	float initial_bal,amt_dep,amt_wid,final_bal;
	printf("Enter Initial account balance: ");
	scanf("%f",&initial_bal);
	printf("Enter amount deposited: ");
	scanf("%f",&amt_dep);
	printf("Enter amount withdrawn: ");
	scanf("%f",&amt_wid);
	final_bal=initial_bal+amt_dep-amt_wid;
	printf("Final account balance= %.2f\n",final_bal);
	return 0;
}
