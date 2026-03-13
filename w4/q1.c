//Program 1: Banana Level 
#include <stdio.h>

int main(){
    printf("Program 1- Output:\n");
    int n,l=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" %d",l++);
        }
        printf("\n");
    }
}
