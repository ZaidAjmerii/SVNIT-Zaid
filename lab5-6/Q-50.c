#include<stdio.h>

int main(){

/*

A
A B
A B C


*/


int ascii = 65, result;


for (int i = 1; i <= 5 ; i++)
{
  for (int j = 1; j <= i; j++)
  {
    result = ascii;
    printf(" %c ", result);
  }
    printf("\n");
    // ascii = 65;
    ascii += 1;
  
}


}