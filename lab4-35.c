// read a number N and print a single digit answer showing sum of digit of N

#include <stdio.h>

int main()
{
  int num, sum = 0, remainder;

  printf("Enter a number: ");
  scanf("%d", &num);

  num = (num < 0) ? -num : num;

  while (num != 0)
  {
    remainder = num % 10;
    sum += remainder;
    num /= 10;
  }

  while (sum >= 10)
  {
    int tempSum = 0;
    while (sum != 0)
    {
      tempSum += sum % 10;
      sum /= 10;
    }
    sum = tempSum;
  }

  printf("Sum of the digits is: %d\n", sum);

  return 0;
}
