/*

WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.
            NCR = (!N/(!R*!(N-R)));

*/




#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}



int NCR(int n, int r) {

  return factorial(n)/(factorial(r)*factorial(n-r));

}

int main() {
    int n, r, ans;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    ans = NCR(n, r);
    printf("Value of nCr is %d\n", ans);
    return 0;
}
