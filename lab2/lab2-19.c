//program to read a character and check wheater it is small case letter or not using conditional operator...

#include<stdio.h>

int main(){
  char character;
  int asciiValue;
 
  printf("Enter your character here:\n>>>");
  scanf("%c", &character);

  asciiValue = character;

  (asciiValue >= 97 && asciiValue <= 122 ) ? printf("Yes, It's small case") : printf("No, It's Not small case");
}
