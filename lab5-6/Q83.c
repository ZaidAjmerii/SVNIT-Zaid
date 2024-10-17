#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;

    printf("Enter the number of elements you are going to type: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("\nEnter your array here:\n>>>");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, n);
    
    printf("Max = %d\n", max);

    return 0;
}
