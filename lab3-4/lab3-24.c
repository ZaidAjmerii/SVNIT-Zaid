/*

simple if else if


1 + x when n = 1

1 + x/n when n = 2

1 + x*x*x when n = 3

1 + nx when n > 3 or n < 1


*/

#include <stdio.h>

int main()
{
  float y, n, x;

  printf("Enter the value of x and n:\n>>>");

  scanf("%f", &x);

  printf(">>>");

  scanf("%f", &n);

  if (n == 1)
  {

    y = 1 + x;

    printf("y = 1 + x\nSo, y is :");

    printf("%.2f", y);
  }
  else if (n == 2)
  {
    y = 1 + (x / n);

    printf("y = 1 + x/n\nSo, y is :");

    printf("%.2f", y);
  }
  else if (n == 3)
  {

    y = 1 + x * x * x;

    printf("y = 1 + (x * x * x) \nSo, y is :");

    printf("%.2f", y);
  }
  else
  {
    y = 1 + (n * x);
    printf("y = 1 + nx\nSo, y is :");

    printf("%.2f", y);
  }
}