#include<stdio.h>
int main()
{
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int choice,q;
    int total=0;
    printf("-----Welcome to Foodies Restaurent-----\n");
    printf("MENU\n");
    printf("Enter 1 for Burger         worth rupees 150\n  ");
    printf("Enter 2 for Pizza          worth rupees 200\n  ");
    printf("Enter 3 for Pasta.         worth rupees 120\n  ");
    printf("Enter 4 for Sandwitch      worth rupees 100\n  ");
    printf("Enter 5 for French Fries   worth rupees 80\n  ");
    printf("Enter 0 For finish order \n\n");

    do{
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 :
            printf("Enter Quantity Of Burgers: ");
            scanf("%d", &q);
            total= 150*q;
            printf("%d Burgers Added(%d rupees)\n",q,150*q);
            break;

            case 2 :
            printf("Enter Quantity Of Pizzas: ");
            scanf("%d", &q);
            total= 200*q;
            printf("%d Pizzas Added(%d rupees)\n",q,200*q);
            break;

            case 3:
            printf("Enter Quantity Of Pastas: ");
            scanf("%d", &q);
            total= 120*q;
            printf("%d Pastas Added(%d rupees)\n",q,120*q);
            break;

            case 4:
            printf("Enter Quantity Of sandwitch: ");
            scanf("%d", &q);
            total= 100*q;
            printf("%d sandwitch Added(%d rupees)\n",q,100*q);
            break;

            case 5:
            printf("Enter Quantity Of french fries: ");
            scanf("%d", &q);
            total= 80*q;
            printf("%d french fries Added(%d rupees)\n",q,80*q);
            break;

            case 0:
            printf("\n--Order Completed--\n");
            break;

            default:
            printf("Invalid choice! Please select from menu\n ");

        }
    }
    while(choice != 0);

    printf("\n------ Bill Summary ------\n");
    printf("Total Amount: ₹%d\n", total);
    printf("Thank you for ordering at Foodies Restaurant!\n");

    return 0;
}