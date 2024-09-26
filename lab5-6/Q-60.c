/*

PROGRAM TO SORT (SELECTION SORT) AN ARRAY

*/

#include <stdio.h>
int main()
{

  int arr[10], help[10];
  printf("Enter your array here:\n>>>");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (arr[j] > arr[i])
      {
        help[i] = arr[i];
        arr[i] = arr[j];
        arr[j] = help[i];
      }
    }
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d\t", arr[i]);
  }
}