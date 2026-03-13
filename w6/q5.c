//Program 5: – Jack Level
#include<stdio.h>

int getRate(int t)
{
    if(t==1) return 20;
    if(t==2) return 40;
    if(t==3) return 60;
}
float calculateBill(int *h,int r,int n)
{
    int i;
    float s=0;

    for(i=0;i<n;i++)
        s=s+(*(h+i))*r;

    return s;
}
void displayBills(int *h,int r,int n)
{
    int i;
    float b;

    for(i=0;i<n;i++)
    {
        b=(*(h+i))*r;
        printf("vehicle %d bill %.2f\n",i+1,b);
    }
}

int main()
{
    printf("Program 5- Output:\n");
    int n,i,type[100],hrs[100],*p[100];
    float s=0,b,m=0;
    int v=0,x=0,threshold;

    printf("Enter number of vehicles: ");
    scanf("%d",&n);
    printf("Enter details of each vehicle: \n");

    for(i=0;i<n;i++)
    {
        printf("\nVehicle %d type: ",i+1);
        scanf("%d",&type[i]);
        printf("Vehicle %d hours: ",i+1);
        scanf("%d",&hrs[i]);

        p[i]=&hrs[i];
    }

    printf("\nEnter threshold hours: ");
    scanf("%d",&threshold);

    printf("\n----- Parking Bill Report ----- \n");
    for(i=0;i<n;i++)
    {
        int r=getRate(type[i]);
        b=(*p[i])*r;

        printf("Vehicle %d Bill= %.2f\n",i+1,b);

        s=s+b;

        if(b>m)
        {
            m=b;
            v=i+1;
        }

        if(*p[i]>threshold)
            x++;
    }

    printf("\nTotal Revenue = %.2f\n",s);
    printf("Maximum Bill Paid By Vehicle %d %.2f\n",v,m);
    printf("Vehicles parked more than 5 hours = %d\n",x);

    return 0;
}