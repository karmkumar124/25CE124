#include<stdio.h>
int main()
{
    for(int i=1;i<=50;i++)
    {
        printf("Book ID = %d",i);

        if (i % 5 == 0)
        {
            printf(" - SPECIAL EDITION \n");
        }
        printf("\n");
    }
return 0;
}










