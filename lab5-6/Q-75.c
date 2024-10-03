#include <stdio.h>

int main() {
    int rollNo[10], subject1[10], subject2[10], subject3[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter Roll No, Subject 1, Subject 2, Subject 3 marks for student %d: ", i + 1);
        scanf("%d %d %d %d", &rollNo[i], &subject1[i], &subject2[i], &subject3[i]);
    }

    printf("Results Table:\n");
    printf("Roll No\tSubject1\tSubject2\tSubject3\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", rollNo[i], subject1[i], subject2[i], subject3[i]);
    }

    return 0;
}
