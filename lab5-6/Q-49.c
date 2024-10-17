/*



  *
 ***
*****



So,we can use

if

if i != 3


*/
#include <stdio.h>
int main()

{

  for (int i = 1; i <= 5; i = i + 2)
  { 
    for (int j = 1; j <= (5 - i)/2; j++)
    {
      printf(" ");
    }

    for (int k = 1; k <= i; k++)
    {
      printf("*");
      // printf(" ");
    }

    for (int j = 1; j <= (5 - i)/2; j++)
    {
      printf(" ");
    }


    printf("\n");
  }
}