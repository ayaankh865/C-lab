//Program 2: Banana Level
#include<stdio.h>

int main(){
	printf("Program 2- Output:\n");
	int cpin=1234,epin,attempts=3;
	while(attempts>0){
		printf("Enter Pin: ");
		scanf("%d",&epin);
		if (epin==1234){
			printf("Access Granted!\n");
			break;
		}else{
			printf("Wrong PIN. Attempts left: %d\n",--attempts);
			if(attempts==0){
			printf("Card Blocked!\n");
			}
		}
	}
	return 0;
}
