#include<stdio.h>
int main()

{
    int marks;

    if (marks<=100)
    {
    printf("Enter Your Marks =");
    scanf("%d",&marks);

    (marks>=90) ?printf("Grade A"):
    (marks>=80 && marks<90) ?printf("Grade B"):
    (marks>=70 && marks<80) ?printf("Grade C"):
    (marks>=60 && marks<70) ?printf("Grade D"):
    (marks<60) ?printf("Grade F"):printf("");
    }
    else
    {
        printf("Enter Marks Between 0 to 100");
    }
    return 0;
}
