#include <stdio.h>

int main() {
    int votes[100], count[5] = {0}, n, spoilt = 0;

    printf("Enter the number of voters: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &votes[i]);

        if (votes[i] >= 1 && votes[i] <= 5) {
            count[i] = votes[i];
        } else {
            spoilt++;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("Candidate %d: %d votes\n", i + 1, count[i]);
    }

    printf("Spoilt ballots: %d\n", spoilt);

    return 0;
}