#include<stdio.h>
int main()
{
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int rows=5;
    int i,j;
    for(i=1;i<=rows;i++)
    {
        printf("1");
        for(j=1;j<i;j++)
        {
            if(j%2 ==1)
            {
                printf(" 0");
            }
            else{
                printf(" 1");
            }
        }
        printf("\n");
    }
    return 0;
}