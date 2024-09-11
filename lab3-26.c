/*

sum of all even and odd between 1 to N...

take n

whileloop

if else

save the answer into another two variable.


*/

#include <stdio.h>

int main()
{
  int n, odd = 0, even = 0, i = 1;

  printf("Enter any number here:\n>>>");
  scanf("%d", &n);

  while (i <= n)
  {
    if (i % 2 == 0)
    {
      even = even + i;
    }
    else if (i % 2 == 1)
    {
      odd = odd + i;
    }

    i = i + 1;
  }

  printf("The sum of even numbers till %d is: %d\n\n", n, even);
  printf("The sum of odd numbers till %d is: %d\n\n", n, odd);
}