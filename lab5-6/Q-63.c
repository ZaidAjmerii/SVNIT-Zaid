#include <stdio.h>

int main()
{
  int arr[3][3], max, min;
  printf("Enter the elements of the matrix: ");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("\n%d ", &arr[i][j]);
    }
  }


  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d \n", arr[i][j]);
    }
  }

  max = min = arr[0][0];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (max < arr[i][j])
      {
        max = arr[i][j];
      }
      if (min > arr[i][j])
      {
        min = arr[i][j];
      }
    }

  }


  printf("Max = %d and Min = %d", max,min);
}
