#include <stdio.h>

int main()
{
  int principal, rate, time, simpleInterest;

  printf("Enter the principal amount: ");
  scanf("%d", &principal);

  printf("Enter the annual interest rate (in percentage): ");
  scanf("%d", &rate);

  printf("Enter the time period (in years): ");
  scanf("%d", &time);

  simpleInterest = (principal * rate * time) / 100;

  printf("Simple Interest = %d", simpleInterest);

  return 0;
}
