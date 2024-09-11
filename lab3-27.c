/*

prime number

N % 1 == 0

N % N == 0

else N % i != 0

then prime


1) take N

2) loop i = 2 i++ till n-1

3)WHILE(I<N)

IF (n % i != 0)

 result = true

else

  result = false
  break;


i++

4) print answer

*/

#include <stdio.h>

int main()
{
  int n, i = 2;
  char result;
  printf("Enter any number here:\n>>>");

  scanf("%d", &n);

  if (n == 1)
  {
    result = 'y';
  }
  else if (n == 2)
  {
    result = 'n';
  }
  else
  {
    while (i < n)
    {
      if (n % i != 0)
      {
        result = 'y';
        i++;
      }
      else
      {
        result = 'n';
        i = n + 1;
        break;
      }
    }
  }

  printf("%c", result);
}