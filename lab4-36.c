// program to print 1,3,5,7,9...N




#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Odd numbers up to %d are:\n", N);

    for (int i = 1; i <= N; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n");

    return 0;
}
