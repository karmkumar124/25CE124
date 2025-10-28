#include<stdio.h>
int main()
{
  for(int i=0;i<=100;i=i+10)
  {
      if(i>=0 && i<=90)
      {
      printf("Current Water Level = %d \n",i);
      }

      else if(i=100)
      {
          printf("Current level = 100 - - Tank Is Full");
      }

      printf("\n");

  }

    return 0;
}
