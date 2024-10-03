#include<stdio.h>
int main(){
  int arr[3][3], help;
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
      printf("%d   ", arr[i][j]);
    }
      printf("\n");
  }

   for (int i = 0; i < 3; i++) {
    for (int j = 0; j < i; j++) {  // Only swap when i < j
      help = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = help;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d   ", arr[i][j]);
    }
      printf("\n");
  }

}