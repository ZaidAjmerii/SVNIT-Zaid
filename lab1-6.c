// program to swap two variable without using a third variable

#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter a and b So, We can swap it for you \n--->");

  scanf("%d %d", &a, &b);

  printf("Your a is :%d\nYour b is:%d\n\n", a, b);

  a = a + b;

  b = a - b;

  a = a - b;

  printf("swaped a is :%d\nswaped b is:%d", a, b);

  return 0;
}
