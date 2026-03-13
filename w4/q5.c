//Program 5: Smart Parking Lot Billing – Jack Level
#include <stdio.h>

int main(){
	printf("Program 5- Output:\n");
	int v_type,rate,v_num=0;
	float hrs,bill,total=0,max_bill=0,min_bill=0;
	printf("Smart Parking Lot Billing System\n");
	printf("Enter Vehicle Type (1=Bike, 2=Car, 3=SUV, 4=Truck, 0=Stop)\n");
	printf("\nEnter vehicle type: ");
	scanf("%d",&v_type);
	while (v_type!=0)
	{
		v_num++;
		min_bill=9999999;
		switch (v_type)
		{
		case 1:
			rate=20;
			break;
		case 2:
			rate=40;
			break;
		case 3:
			rate=60;
			break;
		case 4:
			rate=80;
			break;
		default:
			rate=0;
			break;
		}
		printf("Enter number of hours parked: ");
		scanf("%f",&hrs);
		bill=hrs*rate;
		if (hrs>6)
		{
			bill-=bill*0.15;
		}
		if (v_num%10==0)
		{
			bill+=50;
		}
		if (bill>max_bill)
		{
			max_bill=bill;
		}
		if (bill<min_bill)
		{
			min_bill=bill;
		}
		total+=bill;
		printf("Bill for vehicle %d = %.2f\n",v_num,bill);
		printf("\nEnter vehicle type (0 to stop): ");
		scanf("%d",&v_type);
	}
	printf("\n----- Final Summary -----\n");
	printf("Total Vehicles: %d\n",v_num);
	printf("Total Revenue: Rs. %.2f\n",total);
	printf("Maximum Bill: Rs. %.2f\n",max_bill);
	printf("Minimum Bill: Rs. %.2f\n",min_bill);
	return 0;
}
