//WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI
//NUBERS.TEST THE FUNCTION FOR N=5,10,AND 15


#include <stdio.h>

void generateFibonacci(int n) {
    unsigned long long first = 0, second = 1, next;

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci series: %d\n", first);
    } else {
        printf("Fibonacci series: %llu %llu", first, second);
        for (int i = 2; i < n; i++) {
            next = first + second;
            printf(" %llu", next);
            first = second;
            second = next;
        }
        printf("\n");
    }
}

int main() {
    int testValues[] = {5, 10, 15};

    for (int i = 0; i < 3; i++) {
        int n = testValues[i];
        printf("Fibonacci series for N = %d:\n", n);
        generateFibonacci(n);
    }

    return 0;
}
