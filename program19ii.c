#include<stdio.h>
int main()
{
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int i,j;
    int n=9;
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(i=2;i<=(n+1)/2;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        printf("%d",i);
        for(j=1;j<=n-2*i;j++)
        {
            printf(" ");
        }
        if(i!=n-i+1)
        {
            printf("%d",n-i+1);
        }
        printf("\n");
    }
    return 0;
}    