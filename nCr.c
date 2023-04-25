// nCr calculation using this formula 
// nCr = n! / (r! * (n - r)!)

#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    float nCr;

    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    nCr = (float) factorial(n) / (factorial(r) * factorial(n - r));

    printf("nCr = %.2f", nCr);

    return 0;
}
