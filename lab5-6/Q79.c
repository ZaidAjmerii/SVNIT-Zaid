#include<stdio.h>

void inter(int a, int b){

int c;

  printf("Your a is :%d\nYour b is:%d\n\n", a, b);

  c = a;

  a = b;

  b = c;

  printf("swaped a is :%d\nswaped b is:%d", a, b);

}




int main(){

  int a, b;

  printf("Enter a and b So, We can swap it for you \n--->");

  scanf("%d %d", &a, &b);
  

  inter(a, b);


}