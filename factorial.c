#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of negative number doesn't exist.");
    }
    else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", num, factorial);
    }

    return 0;
}


// Algorithm

// Take an input number from the user.
// Initialize a variable factorial to 1.
// Use a loop that starts from 1 and goes up to the input number.
// Multiply the factorial with the loop variable in each iteration.
// After the loop finishes, the factorial variable will hold the factorial of the input number.
// Print the factorial variable.