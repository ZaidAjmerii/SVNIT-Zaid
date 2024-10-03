// program to add two matrix and save it results into third

#include<stdio.h>
int main(){

  int arr1[3][3],arr2[3][3], sum[3][3];
  printf("Enter the elements of the first matrix: ");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("\n%d ", &arr1[i][j]);
    }
  }


  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d   ", arr1[i][j]);
    }
      printf("\n");
  }
  
  printf("Enter the elements of the second matrix: ");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("\n%d ", &arr2[i][j]);
    }
  }


  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d   ", arr2[i][j]);
    }
      printf("\n");
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum[i][j] = arr1[i][j] + arr2[i][j];
    }

  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d   ", sum[i][j]);
    }
      printf("\n");
  }






}