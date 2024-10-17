// program to multiply two matrix and save it results into third

#include<stdio.h>
int main(){

  int arr1[3][3],arr2[3][3], mul[3][3];
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
      mul[i][j] = arr1[i][j] * (arr2[i][0] + arr2[i][1] + arr2[i][2]);
    }

  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d   ", mul[i][j]);
    }
      printf("\n");
  }






}



