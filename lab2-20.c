// Simple Calculator using switch statements

#include <stdio.h>

int main()
{

  char operator;
  float num1, num2, answer;

  printf("Enter the operator you want to use: (+, -, *, /)");

  scanf("%c", &operator);

  printf("Now, enter two number you want to calculate using %c operator:\n>>>", operator);

  scanf("%f %f", &num1, &num2);

  switch (operator)
  {
  case '+':
    answer = num1 + num2;
    printf("Your answer of %f + %f = %f", num1, num2, answer);
    break;

  case '-':
    answer = num1 - num2;
    printf("Your answer of %f - %f = %f", num1, num2, answer);
    break;

  case '/':
    answer = num1 / num2;
    printf("Your answer of %f / %f = %f", num1, num2, answer);
    break;

  case '*':
    answer = num1 * num2;
    printf("Your answer of %f X %f = %f", num1, num2, answer);
    break;

  default:
    printf("Invalid Operator, Please Try again");
    break;
  }

  return 0;
}
