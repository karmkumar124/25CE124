#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter N : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        if(j%2==1)
        {
            printf("1 ");
        }
        else if(j%2!=1)
        {
            printf("0 ");
        }
        }
        printf("\n");
    }

    return 0;
}
