#include<stdio.h>
int main()
{
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int i,j;
    int rows;
    int cols;
    printf("Enter the size of the table Vertically: ");
    scanf("%d",&rows);
    if(rows<=0)
    {
        printf("Please Enter Non-negetive or Non-zero number\n");
        
    }
    printf("Enter the size of the table Horizontally: ");
    scanf("%d", &cols);
    if(cols<=0)
    {
        printf("Please Enter Non-negetive or Non-zero number\n");
     
    }
    printf("\n Multification Table of(%d x &d)\n\n",rows,cols);
    for( i=1;i<=rows;i++)
    {
        for( j=1;j<=cols;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
   return 0;
}