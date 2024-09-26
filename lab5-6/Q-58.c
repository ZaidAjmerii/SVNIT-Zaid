// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE
// ARRAYS INTO THIRD.

#include <stdio.h>

int main()

{

  int arr1[10], arr2[10], sum[10];

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
  for (int i = 0; i < 10; i++)
  {
    sum[i] = arr1[i] + arr2[i];
    printf("%d element of sum array is : %d\n", i, sum[i]);
  }


}
