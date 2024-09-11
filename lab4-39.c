// program to print 1/1! + 2/2! + 3/3! + ........ + N/N!



#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Series:\n");

    // Print the series

    for (int i = 1; i <= N; i++) {
     printf("%d/%d\!", i, i);

        // Print " + " if not the last term
        if (i < N) {
            printf(" + ");
        }
    }

    printf("\n");

    return 0;
}
