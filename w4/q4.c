//Program 4: Loan EMI Recovery Until Closure –Jack Level
#include<stdio.h>
int main(){
	printf("Program 4- Output:\n");
	int n,m_count=0,p_count=0;
	float p,e,r,total=0,interest,t_interest=0;
	printf("Enter Principle (P): ");
	scanf("%f",&p);
	printf("Enter Monthly Interest Rate (r in %%): ");
	scanf("%f",&r);
	printf("Enter EMI (E): ");
	scanf("%e",&e);
	printf("Enter Max Months (N): ");
	scanf("%d",&n);
	printf("Month-wise Outstanding:\n");
	while(p>=0 && m_count<=n){
	m_count++;interest=p*r/100;t_interest+=interest;
	if (e<interest){
		p+=interest+200-e;p_count++;
	}else{
		p+=interest-e;
	}
	printf("Month %d Outstanding = %.2f\n",m_count,p>0?p:0);
	}
	printf("----- Summary -----\n");
	printf("Total Interest Paid: %.2f\n",t_interest);
	printf("Total Penalties: %d\n",p_count);
	printf("Months Processed: %d\n",m_count);
	if (p<=0){
	printf("Loan Status: CLOSED\n");
	}else{
	printf("Loan Status: Not CLOSED\n");
	}
	return 0;
}
