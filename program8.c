#include<stdio.h>
int main()

{
    int age;

    printf("Enter Your Age Here : ");
    scanf("%d",&age);

    if (age>0)
    {
    if (age<18)
    {
        printf("You Are Not Eligable For Open An Account");
    }
    else if (age>=18 &&age<60)
    {
        printf("You Are Eligable To Open An Account ");
    }
    else if (age>=60)
    {
        printf("You Are Able To Open An Citizen Savings Account ");
    }
    }
    return 0;
}
