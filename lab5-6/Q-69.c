#include <stdio.h>

int main() {
    int arr[5] = {12, 34, 54, 2, 3};
    
    int element, found = -1;

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == element) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Element found at index: %d\n", found);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
