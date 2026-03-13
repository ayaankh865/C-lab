//Program 3: Orange Level
#include<stdio.h>

int main(){
	printf("Program 3- Output:\n");
	int n,l,t,sum=0,rg=0;
	printf("Enter the base number: ");
	scanf("%d",&n);
	printf("Enter the limit: ");
	scanf("%d",&l);
	printf("Enter the threshold value: ");
	scanf("%d",&t);
	printf("Multiplication Table:\n");
	for (int i=1;i<=l;i++){
		printf("%d x %d = %d\n",n,i,n*i);
		sum+=n*i;
		if(n*i>t){
			rg++;
		}
	}
	printf("Total sum =%d\n",sum);
	printf("Results greater than %d = %d\n",t,rg);
	printf("Maximum Result = %d\n",n*l);
	return 0;
}
