#include <stdio.h>

int main()
{
  int sum = 0, num;
  int i = 1;

  while (i != 0)
  {

    printf("Enter a number here. Enter a negative number to stop the loop\n");

    scanf("%d", &num);

    if (num < 0)
    {
      i = 0;
    }
    else
    {
      sum += num;
    }
  }

  printf("Sum of all entered numbers: %d\n", sum);

  return 0;
}