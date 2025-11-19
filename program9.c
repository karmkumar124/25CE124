#include<stdio.h>
int main()
{
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    float TA,DA,FA;
    printf("-----ShopEase Online-----\n");
    printf("Enter the total Ammount: ");
    scanf("%f", &TA);
    
    if(TA<1000)
    {
        printf("You Did not get any discount\n");
        DA=TA;
    }
    else if(TA>=1000 && TA<5000)
    {
        printf("Hurray! you Got 10%% Discount\n");
        DA=TA-(TA*0.1);
    }
    else if(TA>=5000)
    {
        printf("Hurray! you got 20%% Discount\n");
        DA=TA-(TA*0.2);
    }
    printf("----bill summry----\n");
    printf("your Discount ammount is %.2f Rupees\n",DA);
    printf("5%% GST Applied\n");
    FA=DA+(DA*0.05);
    printf("Your Final Ammount Is:%.2f Rupees\n",FA);



}