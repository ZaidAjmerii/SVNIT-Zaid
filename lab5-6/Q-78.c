// Armstrong Number

#include <stdio.h>

void armstrong()
{

  int num, originalNum, remainder, result = 0;

  // Input a number
  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  // Store the original number
  originalNum = num;

  // Check if the number is a three-digit number
  if (num < 100 || num > 999)
  {
    printf("Please enter a three-digit number.\n");
    originalNum = 0;
  }

  // Calculate the Armstrong sum
  while (originalNum != 0)
  {
    remainder = originalNum % 10;                // Get the last digit
    result += remainder * remainder * remainder; // Add cube of the digit
    originalNum /= 10;                           // Remove the last digit
  }

  // Check if the number is an Armstrong number
  if (result == num)
  {
    printf("%d is an Armstrong number.\n", num);
  }
  else
  {
    printf("%d is not an Armstrong number.\n", num);
  }
}

int main()
{
  armstrong();
}