
#include <stdio.h>
int main()

{

 

  for (int i = 1; i <= 7; i+=2)
  {
    
    for (int j = 1; j <= (7 - i)/2; j++)
    {
      printf(" ");
    }

    for (int k = 1; k <= i; k++)
    {
      printf("*");

    }
    

    printf("\n");

    
  }

  for (int i = 1; i <= 6; i+=2)
  
  {
    

    
    printf(" ");
    for (int j = 1; j <= i/2; j++)
    {
      printf(" ");
    }

    for (int k = 1; k <= 6 - i; k++)
    {
      printf("*");

    }

    printf("\n");
    
  }
}

