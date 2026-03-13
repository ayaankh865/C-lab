//Program 4: – Jack Level
#include<stdio.h>

float feecollection()
{
    int i;
    float s=0,f;

    for(i=1;i<=10;i++)
    {
        printf("Child %d Fee: ",i);
        scanf("%f",&f);
        s+=f;
    }

    return s;
}
float salaryexpense(int m,int s,int a)
{
    return m*45000+s*30000+a*15000;
}
float additional(float x,float y)
{
    return x+y;
}

int main()
{
    printf("Program 4- Output:\n");
    float fee,s,a,m,p,e,b;
    int x,y,z;

    printf("Enter fee paid by 10 children:\n");
    fee=feecollection();

    printf("\nEnter number of Managers: ");
    scanf("%d",&x);
    printf("Enter number of Senior Caretakers: ");
    scanf("%d",&y);
    printf("Enter number of Assistant Caretakers: ");
    scanf("%d",&z);
    s=salaryexpense(x,y,z);

    printf("\nEnter maintenance expenses: ");
    scanf("%f",&m);
    printf("Enter total cash prizes for top-performing children: ");
    scanf("%f",&p);
    a=additional(m,p);

    e=s+a;
    b=fee-e;

    printf("\n----- Play Area Budget Summary -----\n");
    printf("Total Fee Collection = %.2f\n",fee);
    printf("Total Salary Expenditure = %.2f\n",s);
    printf("Total Additional Expenses = %.2f\n",a);
    printf("Final Remaining Balance = %.2f\n",b);

    return 0;
}