// area of triangle

#include <stdio.h>

int main()
{

  int base, height, area;

  printf("Enter your triangle’s base and height here to calculate it’s area:\n—>");

  scanf("%d %d", &base, &height);

  area = (base * height) / 2;

  printf("Your triangle’s area with base %d and height %d is: %d", base, height, area);

  return 0;
}
