// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE,
// NEGATIVE, AND ZERO ELEMENTS.

// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND
// TOTAL NO. OF EVEn ELEMENT.

#include <stdio.h>

int main()
{

  int pos = 0, neg = 0,zero = 0, arr[10];

  printf("Enter your array here:\n>>>");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    if (arr[i] == 0)
    {
      zero += 1;
    }
    else if(arr[i] > 0)
    {
      pos += 1;
    }else
    {
      neg += 1
    }
    
  }

  printf("No. of Odd = %d and No. of Even = %d", odd, even);
}
