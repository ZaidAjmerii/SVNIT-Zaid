#include <stdio.h>

int main()
{
  int N, i, count = 0;
  printf("Enter a number: ");
  scanf("%d", &N);
  for (i = 1; i <= N; i++)
  {
    if (N % i == 0)
    {
      count++;
    }
  }
  if (count == 2)
  {
    printf("%d is a prime number.", N);
  }
  else
  {
    printf("%d is a composite number.", N);
  }
  return 0;
}