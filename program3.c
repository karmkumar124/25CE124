#include<stdio.h>
int main()
{
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    float height, weight, BMI;
    printf("-----BMI Calculator-----\n");
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    if(height<=0)
    {
        printf("Note: The height Cannot Be a zero or nagative number");
        return 0;
    }

    printf("Enter Your Weight in kg: ");
    scanf("%f", &weight);
    if(weight<=0)
    {
        printf("Note: The weight cannot be a zero Or negative number");
        return 0;
    }
     
    BMI=weight/(height*height);
    printf("Your Body Mass Index(BMI)is: %f\n",BMI);
    if(BMI<18.5)
    {
        printf("You are underweight");
        return 0;
    }
    else if(BMI>=18.5 && BMI<=24.9)
    {
        printf("you are in normal weight");
        return 0;
    }
    else if(BMI>=25 && BMI<=29.9)
    {
        printf("you are Overweight");
        return 0;
    }
    else if(BMI>=30)
    {
        printf("you are obses");
        return 0;
    }

}