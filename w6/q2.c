//Program 2: Orange Level 
#include<stdio.h>

float calculateIncome(float r,float s,float t)
{
    return r*15+s+t;
}
float calculateVolunteerExpense(int v)
{
    return v*200;
}
float calculateTotalExpense(float a,float b,float c,float d)
{
    return a+b+c+d;
}
float calculateProfitOrLoss(float i,float e)
{
    return i-e;
}

int main()
{
    printf("Program 2- Output:\n");
    float r_fee,spon,rent,stage,g_pay,mar,i,e,p;
    int vol;

    printf("Registration Fee: ");
    scanf("%f",&r_fee);
    printf("Sponsorship: ");
    scanf("%f",&spon);
    printf("Stall Rent: ");
    scanf("%f",&rent);
    printf("Stage Setup: ");
    scanf("%f",&stage);
    printf("Guest Payment: ");
    scanf("%f",&g_pay);
    printf("Marketing: ");
    scanf("%f",&mar);
    printf("Volunteers: ");
    scanf("%d",&vol);

    i=calculateIncome(r_fee,spon,rent);
    e=calculateTotalExpense(stage,g_pay,mar,calculateVolunteerExpense(vol));
    p=calculateProfitOrLoss(i,e);

    printf("\nTotal Income: ₹%.2f\n",i);
    printf("Total Expense: ₹%.2f\n",e);
    if(p>=0)
        printf("Profit: ₹%.2f\n",p);
    else
        printf("Loss: ₹ %.2f\n",-p);

    return 0;
}