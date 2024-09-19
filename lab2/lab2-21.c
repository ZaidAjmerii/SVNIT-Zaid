// Simple Calculator using switch statements[Using Character as case]

#include <stdio.h>

int main()
{

  char operator;
  float num1, num2, answer;

  printf("Enter the operator you want to use: (p for plus, m for minus, x for multiplication, d for division)");

  scanf("%c", &operator);

  printf("Now, enter two number you want to calculate using %c operator:\n>>>", operator);

  scanf("%f %f", &num1, &num2);

  switch (operator)
  {
  case 'p':
    answer = num1 + num2;
    printf("Your answer of %f + %f = %f", num1, num2, answer);
    break;

  case 'm':
    answer = num1 - num2;
    printf("Your answer of %f - %f = %f", num1, num2, answer);
    break;

  case 'd':

    if (num2 != 0)
    {
      answer = num1 / num2;
      printf("Your answer of %f / %f = %f", num1, num2, answer);
      break;
    }
    else
    {
      printf("Division by zero is not possible");
      break;
    }
  case 'x':
    answer = num1 * num2;
    printf("Your answer of %f X %f = %f", num1, num2, answer);
    break;

  default:
    printf("Invalid Operator, Please Try again");
    break;
  }

  return 0;
}
