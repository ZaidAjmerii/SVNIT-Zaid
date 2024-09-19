// program to check wheater a given character is capital letter, small case letter, a digit or a special symbol.

#include <stdio.h>

int main()
{

  char character;
  int asciiValue;

  printf("Enter your character here:\n>>>");

  scanf("%c", &character);

  asciiValue = character;

  if (asciiValue >= 65 && asciiValue <= 90)
  {
    printf("The character you entered is a Capital Case Letter");
  }
  else if (asciiValue >= 97 && asciiValue <= 122)
  {
    printf("The character you entered is a small case Letter");
  }
  else if (asciiValue >= 48 && asciiValue <= 57)
  {
    printf("The character you entered is a Digit!");
  }
  else if ((asciiValue >= 32 && asciiValue <= 47) ||
           (asciiValue >= 58 && asciiValue <= 64) ||
           (asciiValue >= 91 && asciiValue <= 96) ||
           (asciiValue >= 123 && asciiValue <= 126))

  {
    printf("The character you entered is a Special Character!\n");
  }
  else
  {
    printf("Unknown Character!\n");
  }

  return 0;
}
