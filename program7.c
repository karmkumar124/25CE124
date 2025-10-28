#include<stdio.h>
int main()
{
    int age;

    printf("PERSON AGE = ");
    scanf("%d",&age);

    if (age>0)
    {
     if (age<12)
    {
        printf("FREE ENTRY");
    }
     else if (age>=12 && age<40)
    {
        printf("PAY : 10$ ");
    }
     else if (age>=40 && age<60)
    {
        printf("PAY : 5$ ");
    }
    }
    return 0;
}
