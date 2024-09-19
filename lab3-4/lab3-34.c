/*


program to print fibbonaci series

0 1 1 2 3


*/

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci series: %d\n", first);
    } else {
        printf("Fibonacci series: %llu %llu", first, second);
        for (i = 2; i < n; i++) {
            next = first + second;
            printf(" %llu", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}