/*
Write a program in C to find the pivot element of a sorted and rotated array
using binary search. Pivot element is the only element in input array which is
smaller than its previous element. A pivot element divided a sorted rotated array
into two monotonically increasing array.
*/

#include<stdio.h>

int main(){
  int a[] = {1,2,3,4,5,6,2,3,5,6,7,8,9};
  int save, n;
  n = sizeof(a) / sizeof(a[0]);


  for (int i = 0; i < n; i++)
  {
    if (a[i] > a[i + 1])
    {
      save = i + 1;
    }
    
  }
  
  printf("Pivot element is equal to = %d and its position in array is %d", a[save], save);
  
}