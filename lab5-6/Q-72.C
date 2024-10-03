#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positions, temp[100];

    printf("Enter positions to rotate: ");
    scanf("%d", &positions);

    for (int i = 0; i < positions; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n - positions; i++) {
        arr[i] = arr[i + positions];
    }

    for (int i = 0; i < positions; i++) {
        arr[n - positions + i] = temp[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
