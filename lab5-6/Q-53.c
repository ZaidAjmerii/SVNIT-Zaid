
#include <stdio.h>
int main()

{

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5 - i; j++)
    {
      printf(" ");
    }

    for (int k = 1; k <= i; k++)
    {
      printf("*");
      printf(" ");
    }

    printf("\n");
  }

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" ");
    }

    for (int k = 1; k <= 5-i; k++)
    {
      printf("*");
      printf(" ");
    }

    printf("\n");
  }
}