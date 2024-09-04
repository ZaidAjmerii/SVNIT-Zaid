// Student cutoff

#include <stdio.h>

int main()
{

  float CM, Math, Physics, Chemistry, English;

  // CM = cutoff marks = M/2 + P/2 + C/2 + E

  printf("Enter your Math marks out of 200 here\n>>>");
  scanf("%f", &Math);

  printf("Enter your Physics marks out of 200 here\n>>>");
  scanf("%f", &Physics);

  printf("Enter your Chemistry marks out of 200 here\n>>>");
  scanf("%f", &Chemistry);

  printf("Enter your English marks out of 100 here\n>>>");
  scanf("%f", &English);

  CM = Math / 2 + Physics / 2 + Chemistry / 2 + English;

  printf("Your cutoff marks is: %.2f ", CM);

  return 0;
}
