/*
print table of any number



take a number

use while loop until i <= 10


and print

a X i = a*i;



*/

#include <stdio.h>

int main()
{

  int tableNo, i = 1, result;

  printf("Enter any Number.\n>>>");
  scanf("%d", &tableNo);

  printf("Table of %d\n\n\n", tableNo);

  while (i <= 10)
  {
    result = tableNo * i;
    printf("%d X %d = %d\n", tableNo, i, result);
    i++;
  }

  return 0;
}