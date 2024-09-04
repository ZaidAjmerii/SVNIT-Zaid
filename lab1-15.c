// program to read marks of five subjects and print division.

#include <stdio.h>

int main()
{

  float total, Math, Physics, Chemistry, English, Computer, gradeCal;

  printf("Enter your Math marks\n>>>");
  scanf("%f", &Math);

  printf("Enter your Computer marks\n>>>");
  scanf("%f", &Computer);

  printf("Enter your Physics marks\n>>>");
  scanf("%f", &Physics);

  printf("Enter your Chemistry marks\n>>>");
  scanf("%f", &Chemistry);

  printf("Enter your English marks\n>>>");
  scanf("%f", &English);

  total = Math + Physics + Chemistry + English + Computer;

  gradeCal = total / 5;

  if (gradeCal >= 80 && gradeCal <= 100)
  {

    printf("Your Grade is A");
  }
  else if (gradeCal >= 60 && gradeCal <= 79)
  {

    printf("Your Grade is B");
  }
  else if (gradeCal >= 40 && gradeCal <= 59)
  {

    printf("Your Grade is C");
  }
  else
  {

    printf("Your grade is D");
  }

  return 0;
}
