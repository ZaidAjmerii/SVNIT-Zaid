#include <stdio.h>

int main()
{

  float celsius, farh;

  printf("Enter temperature in fahrenhiet\n--->");
  scanf("%f", &farh);

  celsius = (farh - 32) * 5 / 9;

  printf("Temperature in celsius is %f", celsius);
}
