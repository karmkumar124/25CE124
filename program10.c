#include<stdio.h>
int main()

{
    int Num,TA,Q;
    printf("-----WElCOME------\n");
    printf("Press 1 for BURGER\n");
    printf("Press 2 for PIZZA\n");
    printf("Press 3 for PASTA\n");
    printf("Press 4 for SANDWICH\n");
    printf("Press 5 for FRANCH FRIES\n");
    printf("Select Number -- ");
    scanf("%d",&Num);


switch (Num)
{
    case 1:
        printf("BURGER: 150 rs.\n");
        printf("QUANTITY:");
        scanf("%d",&Q);
        TA=Q*150;
        printf("Your Total Amount is %d\n",TA);
        printf("Thank You For Order");
        break;

    case 2:
        printf("PIZZA: 200 rs.\n");
        printf("QUANTITY:");
        scanf("%d",&Q);
        TA=Q*200;
        printf("Your Total Amount is %d\n",TA);
        printf("Thank You For Order");
        break;

    case 3:
        printf("PASTA: 120 rs.\n");
        printf("QUANTITY:");
        scanf("%d",&Q);
        TA=Q*120;
        printf("Your Total Amount is %d\n",TA);
        printf("Thank You For Order");
        break;

    case 4:
        printf("SANDWICH: 100 rs.\n");
        printf("QUANTITY:");
        scanf("%d",&Q);
        TA=Q*100;
        printf("Your Total Amount is %d\n",TA);
        printf("Thank You For Order");
        break;

    case 5:
        printf("FRANCHFRIES: 80 rs.\n");
        printf("QUANTITY:");
        scanf("%d",&Q);
        TA=Q*80;
        printf("Your Total Amount is%d\n",TA);
        printf("Thank You For Order");
        break;

    default:
        printf("Invalid choice");
}
return 0;

}
