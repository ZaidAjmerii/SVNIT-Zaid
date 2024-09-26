#include <stdio.h>
int main()
{

  // PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX
  {

    int n, max, secmax, count = 0;
    printf("Enter the number of elements you going to type: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter your array here:\n>>>");
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }

    max = secmax = arr[0];

    for (int i = 0; i < n; i++)
    {
      if(arr[i] > max)
      {
        secmax = max;
        max = arr[i];
      }
    }
    
    printf("Max = %d and SecMax= %d", max, secmax);
  }
}