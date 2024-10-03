#include <stdio.h>

int main() {
    int n, element, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int arr[n];

    printf("Enter the element to count: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    printf("The element %d occurs %d times.\n", element, count);

    return 0;
}
