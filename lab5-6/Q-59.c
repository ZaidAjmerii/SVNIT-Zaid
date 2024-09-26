// Swap arrays.

#include <stdio.h>

int main()

{

  int arr1[10], arr2[10], help[10];

  printf("Enter your first array here:\n>>>");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr1[i]);
  }

  printf("Enter your second array here:\n>>>");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr2[i]);
  }

  printf("Array One:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d\t", arr1[i]);
  }
  printf("\n\n");

  printf("Array Two:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d\t", arr2[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    help[i] = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = help[i];
  }
  printf("\n\n");

  printf("Swap: Array One:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d\t", arr1[i]);
  }
  printf("\n\n");
  printf(" Swap: Array Two:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d\t", arr2[i]);
  }
}
