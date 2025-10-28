#include<stdio.h>
float main()
{
    float Fahrenheit,Celsius;

    printf("Enter Temprature In Celsius = ",Celsius);
    scanf("%f",&Celsius);
    Fahrenheit = (Celsius * 9/5) + 32;

    printf("Temprature In Fahrenheit Is %f",Fahrenheit);

    return 0;
}
