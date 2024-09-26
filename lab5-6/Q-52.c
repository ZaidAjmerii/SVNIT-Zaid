/*


        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1


*/

#include <stdio.h>
int main()



{
  int s;
  for (int i = 1; i < 5; i++)
  {
    for (int j = 0; j < 4 - i; j++)
    {
      printf("  ");
    }


      for (int k = 1; k <= i; k++)
      {
        printf("%d", k);
        printf(" ");
      }

      s = i;
      while(s>1){
        printf("%d", s-1);
        printf(" ");
        s--;
      }      
    printf("\n");
  }
}