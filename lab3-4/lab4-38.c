// program to print 1 4 9 16 .. N

#include <stdio.h>

int main()
{
    int N;
    int i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Perfect squares up to %d are:\n", N);

    while (1)
    {
        int square = i * i;
        if (square > N)
        {
            break;
        }
        printf("%d ", square);
        printf("\n");
        i++;
    }

    return 0;
}