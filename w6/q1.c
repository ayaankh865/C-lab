//Program 1: Banana Level
#include<stdio.h>
float compute_hra(float b)
{
    return 0.2*b;
}
float compute_da(float b)
{
    return 0.1*b;
}
float compute_gross(float b,float h,float d)
{
    return b+h+d;
}
float compute_tax(float g)
{
    return 0.05*g;
}
float compute_net(float g,float t)
{
    return g-t;
}

int main()
{
    printf("Program 1- Output:\n");
    float b,h,d,g,t,n;

    printf("Enter Basic Salary: ");
    scanf("%f",&b);

    h=compute_hra(b);
    d=compute_da(b);
    g=compute_gross(b,h,d);
    t=compute_tax(g);
    n=compute_net(g,t);

    printf("\n----- Salary Details -----\n");
    printf("Gross Salary = %.2f\n",g);
    printf("Tax = %.2f\n",t);
    printf("Net Salary = %.2f\n",n);

    return 0;
}