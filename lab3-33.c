/*
program to findout max and min from N nos
*/

#include <stdio.h>

int main() {
    int num, remainder;
    int max = -1, secondMax = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;

    while (num != 0) {
        remainder = num % 10;

        // Update max and secondMax
        if (remainder > max) {
            secondMax = max;
            max = remainder;
        } else if (remainder > secondMax && remainder < max) {
            secondMax = remainder;
        }

        num /= 10;
    }

    if (secondMax == -1) {
        printf("There is no second maximum digit.\n");
    } else {
        printf("Max = %d\n", max);
        printf("Second Max = %d\n", secondMax);
    }

    return 0;
}
