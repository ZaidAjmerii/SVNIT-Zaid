// program to print 2,4,6,8,.....N


#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Even numbers up to %d are:\n", N);

    // Print even numbers from 2 to N
    for (int i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n");

    return 0;
}