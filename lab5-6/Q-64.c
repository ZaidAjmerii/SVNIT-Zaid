//Program to print 3*3 matrix and print sum of all rows

#include<stdio.h>
int main(){
  int arr[3][3], sum[3];
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

   for (int i = 0; i < 3; i++)
  {
    sum[i]=0;
    for (int j = 0; j < 3; j++)
    {

      sum[i] += arr[i][j]; 

    }

    printf("Sum of element of row 1 = %d\n", sum[i]);

  }



}

