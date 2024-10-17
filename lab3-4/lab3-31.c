/*

program to print sum of indiviual digitz of a N digit no

*/


#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of the digits is: %d\n", sum);

    return 0;
}

