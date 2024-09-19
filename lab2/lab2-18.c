// read three no. and print max using (? : ) operator

#include <stdio.h>

int main()
{

  float a, b, c, max;

  printf("Enter three numbers here to find the maximum number: \n>>>");

  scanf("%f %f %f", &a, &b, &c);

  printf("Number 1: %f\nNumber 2: %f\nNumber 3: %f\n>>>", a, b, c);

  max = a > b && a > c ? a : (b > a && b > c ? b : c);

  printf("%f is the maximum number", max);
}
