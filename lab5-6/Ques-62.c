/*

program to reverse an array

a[5] = [1,2,3,4,5]

for(int i=0,i < 5, i++)
{
  a[4-i] = b[i];
}


*/

#include <stdio.h>

int main()
{
  int a[5], b[5];

  printf("Enter You Array: \n");
  for (int i = 0; i < 5; i++)
  {
    scanf("\n %d", &a[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    b[i] = a[4 - i];
  }

  printf("Your Array \n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d \t", a[i]);
  }

  printf("\nReverse Array \n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d \t", b[i]);
  }

}