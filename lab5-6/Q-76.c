//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD

#include<stdio.h>

 int evenOrNot(int n){

 return (n % 2 == 0?1:0);

 }
int main(){

  if (evenOrNot(6))
  {
    printf("Yes Its a even Number");
  }else
  {
    printf("No its not a even Number");
  }
  
}
 