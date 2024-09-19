// Check if a number is even or odd

#include <stdio.h>

int main()
{

  int a;

  printf("Enter the number here to check if it's even or odd\n>>>");

  scanf("%d", &a);

  if (a % 2 == 0)
  {
    printf("The number you entered: %d, is even", a);
  }
  else
  {
    printf("The number you entered: %d, is odd", a);
  }

  return 0;
}
