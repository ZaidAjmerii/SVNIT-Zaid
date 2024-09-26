// Program to read an array of 10 integer and prints it sums

#include<stdio.h>

int main()

{

int arr[10], sum = 0;

printf("Enter your array here:\n>>>");
for (int i = 0; i < 10; i++)
{
  scanf("%d", &arr[i]);
}

for (int i = 0; i < 10; i++)
{
  sum = sum + arr[i];
}


printf("Sum of the elements of the entire array is : %d", sum);


}