#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int seconds;
    printf("Enter the starting Number of seconds for countdown:  ");
    scanf("%d", &seconds);

    if(seconds<0)
    {
        printf("ERROR: you Cannot enter Negative Number\n");
        return 1;
    }
    printf("\nStarting Countdown....\n");

    for(int i=seconds;i>0;i--)
    {
        printf("%d\n",i);
        sleep(1);
    }
    printf("Countdown Completed!\n");
    return 0;

}
