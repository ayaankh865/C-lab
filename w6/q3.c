//Program 3: - Orange Level 
#include<stdio.h>

float average(int *p,int n)
{
    int i;
    float s=0;

    for(i=0;i<n;i++)
    {
        s=s+*(p+i);
    }

    return s/n;
}

int main()
{
    printf("Program 3- Output:\n");
    int n,i,a[100];
    float r;

    printf("Enter number of books: ");
    scanf("%d",&n);

    printf("Enter stock of 5 books:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    r=average(a,n);

    printf("\nAverage stock of books = %.2f\n",r);

    return 0;
}