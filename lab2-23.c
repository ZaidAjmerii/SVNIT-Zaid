// program to read two NOS. and calculate power without using header file (<MATH.H>)

#include <stdio.h>

int main()
{

  int exponent;
  float base, result = 1;

  printf("Enter you base first and then exponent:\n>>>");

  scanf("%f %d", &base, &exponent);

  for (int i = 1; i <= exponent; i++)
  {
    result *= base;
  }

  printf("%f", result);
}
