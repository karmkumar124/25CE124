#include<stdio.h>
float main()
{
    float weight,height,BMI;
printf("Enter weight = ");
scanf("%f",&weight);
printf("Enter height = ");
scanf("%f",&height);

BMI = weight/(height*height);
printf("BMI is %f ",BMI);
    if ("BMI<18.5")
    {
    printf("you are underweight");
}

   else if ("BMI>=18.5 && BMI<=24.9")
   {
    printf("you are normalweight");
}
   else if ("BMI>=25 && BMI<=29.9")
   {
    printf("you are overweight");
}
if (weight<=0 && height<=0)
{
    return 0;
}
}
