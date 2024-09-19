/*
program to findout max and min from N nos
*/


#include <stdio.h>

int main()
{

    int num, max = -1, min = 9999, N;

    printf("Enter The number of NUMBERS [N] you are going to give:\n>>>");

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("Enter your %d here:\n>>>", i);
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
        }
        if (min > num)
        {
            min = num;
        }
    }

    printf("Your Maximum Number is :%d\n", max);
    printf("Your minimun Number is :%d\n", min);
}