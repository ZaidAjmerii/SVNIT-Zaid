/*

10000
01000
00100
00010
00001

Yah 

we can make an array & then print it using loops

*/




#include<stdio.h>

int main()
{


int arr[5] = {1,0,0,0,0};

for (int i = 0; i < 5; i++)
{

  for (int j = 0; j < 5; j++)
  {
  printf("%d", arr[j]);
  }

  printf("\n");
  
  if (i + 1 < 5) {
    arr[i + 1] = 1;
}
  arr[i] = 0;
  
}












}


