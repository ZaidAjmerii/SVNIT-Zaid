#include "stdio.h"
int main(void) {
  int grossSalary, basicSalary, hra, otherAllowances;
  printf("Enter your Information correctly to get your gross salary \n");

  printf("Basic Salary\n>>>");

  scanf("%d", &basicSalary);

  printf("HRA\n>>>");

  scanf("%d", &hra);

  printf("Other Allowances\n>>>");

  scanf("%d", &otherAllowances);

  grossSalary = basicSalary + hra + otherAllowances;

  printf("Your gross salary is %d", grossSalary);
  return 0;
}
