#include<stdio.h>
int main()
{
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int age;
    printf("----Eligibiliti Checker----\n");
    printf("Enter Your Age: ");
    scanf("%d",&age);

    if(age<=0)
    {
        printf("Invalid age enterd! please enter valid age\n");
        return 0;
    }
    else if(age>0 && age<18)
    {
        printf("You are not eligible\n");
        return 0;
    }
    else if(age>=18 && age<=59)
    {
        printf("You are eligible for Regular savings account\n");
        return 0;
    }
    else if(age>=60 )
    {
        printf("You are eligible for senior citizon Account\n");
        return 0;
    }
}