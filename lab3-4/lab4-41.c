#include <stdio.h>

int main()
{
    int N, i;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Factors of %d: ", N);
    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
