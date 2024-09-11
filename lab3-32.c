/*
program to findout max and second max from N nos
*/



#include <stdio.h>

int main() {
    int num, remainder;
    int max = -1, min = 10;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;

    while (num != 0) {
        remainder = num % 10;

        // Update max and min
        if (remainder > max) {
            max = remainder;
        }
        if (remainder < min) {
            min = remainder;
        }

        num /= 10;
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
}
