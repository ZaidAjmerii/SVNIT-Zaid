// Factorial using loop
#include <stdio.h>

int main()
{

  int n;
  long long int fac1 = 1;

  printf("enter the number you want to find factorial of\n>>>");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    fac1 *= i;
  }

  printf("%lld", fac1);
}
