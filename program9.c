#include<stdio.h>
int main()
{
    int TA,D;
    printf("Enter Purchase Amount Here :");
    scanf("%d",&TA);
    if (TA>0)
        {
    if (TA<1000)
    {
        printf("You Can't Get Discount");
        printf("Your Payable Amount Is %d",TA);
    }
    else if (TA>=1000 && TA<5000)
    {
        D=TA-(TA*0.1);
        printf("You Got 10% Discount\n");
        printf("Your Payable Amount Is %d",D);
    }
    else if (TA>=5000)
    {
        D=TA-(TA*0.2);
        printf("You Got 20% Discount\n");
        printf("Your Payable Amount Is %d",D);
    }
    else
    {
        printf("No Discount Available");
    }
        }
        return 0;
}

