//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND
//TOTAL NO. OF EVEn ELEMENT.



#include<stdio.h>

int main()
{

int odd=0, even=0, arr[10];

printf("Enter your array here:\n>>>");
for (int i = 0; i < 10; i++)
{
  scanf("%d", &arr[i]);
}

for (int i = 0; i < 10; i++)
{
  if (arr[i]%2==0)
  {
    even += 1;
  }else
  {
    odd += 1;
  }
  
}

printf("No. of Odd = %d and No. of Even = %d", odd, even);

}


