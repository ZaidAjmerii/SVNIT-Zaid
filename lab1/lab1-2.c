#include <stdio.h>

int main() {
  int math, sci, eng, cs, hindi, total;
  float percentage;

  printf("Enter your subjects marks here to calcuate percentage\n");

  printf("Please enter your maths marks\n>>>");

  scanf("%d", &math);

  printf("Please enter your science marks\n>>>");

  scanf("%d", &sci);

  printf("Please enter your english marks\n>>>");

  scanf("%d", &eng);

  printf("Please enter your computer science marks here\n>>>");

  scanf("%d", &cs);

  printf("Please enter your hindi marks\n>>>");

  scanf("%d", &hindi);

  total = math + sci + eng + cs + hindi;

  percentage = total * 100.0 / 500.0;

  printf("So your total marks is %d and your percentage is %.2f", total, percentage);

  return 0;
}
