/*


program to findout max and second max from N nos

take one number from the user

And number of numbers he is going to give(N)

if its bigger than max

then first assign sec max to max

then max to user num

then Do it till N times (i < n)


*/

#include <stdio.h>

int main()
{

    int num, max = -1, secmax = -1, N;

    printf("Enter The number of NUMBERS [N] you are going to give:\n>>>");

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("Enter your %d here:\n>>>", i);

        scanf("%d", &num);

        if (num > max)
        {
            secmax = max;
            max = num;
        }
        else if (max > num && num > secmax)
        {
            secmax = num;
        }
    }

    printf("Your Max Number is :%d\n", max);
    printf("Your SecondMax Number is :%d\n", secmax);
}