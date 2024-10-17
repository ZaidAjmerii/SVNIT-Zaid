#include <stdio.h>

void paliOrNot(int n)
{
  int remainder, reversedNum, originalNum;
  originalNum = n;

  while (n != 0)
  {
    remainder = n % 10;
    reversedNum = reversedNum * 10 + remainder;
    n /= 10;
  }

  if (reversedNum == originalNum)
  {
    printf("%d is a palindrome.\n", originalNum);
  }
  else
  {
    printf("%d is not a palindrome.\n", originalNum);
  }
}

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  paliOrNot(n);
}