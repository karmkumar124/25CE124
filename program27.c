#include<stdio.h>
int main()
{
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int n;
    printf("Enter Number of Months: ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Enter the number at least 1\n");
        return 0;
    }
    long long a=1,b=1,next;
    printf("\n----Savings Growth Pattern----\n");
    for(int i=1;i<=n;i++){
        if(i==1)
        printf("Month %d: %lld\n",i,a);
        else if(i==2)
        printf("Month %d: %lld\n",i,b);
        else{
            next =a + b;
            printf("Month %d: %lld\n",i,next);
            a=b;
            b=next;
        }
    }
    return 0;

}