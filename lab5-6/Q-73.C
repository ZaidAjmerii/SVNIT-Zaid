#include <stdio.h>

int main() {
    int votes[100], count[5] = {0}, n, spoilt = 0;

    printf("Enter the number of voters: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &votes[i]);

        if (votes[i] >= 1 && votes[i] <= 5) {
            count[votes[i] - 1]++;
        } else {
            spoilt++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("votes for cardidate %d are %d\n\n", i + 1, count[i]);
    }
    

    printf("Spoilt ballots: %d\n", spoilt);

    return 0;
}