#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n)
{
    if (n <= 1)
    {
        return 0; // Not prime
    }
    if (n == 2)
    {
        return 1; // 2 is prime
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int n;

    printf("Enter any number here:\n>>>");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("The number %d is a prime number.\n", n);
    } else {
        printf("The number %d is not a prime number.\n", n);
    }

    return 0;
}

// int main()
// {

//     int count = 0;

//     for (int i=2;  < 10; i++)
//     {

//         if (isPrime(i) == 1)
//         {
//             printf("%d \n", i);
//             count++;
//         }
//     }
// }
