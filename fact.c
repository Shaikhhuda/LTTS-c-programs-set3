// sum of factors

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Error: Enter a positive integer.");
    }
    else {
        for (i = 1; i <= num; ++i) {
            if (num % i == 0) {
                sum += i;
            }
        }
        printf("Sum of factors of %d = %d", num, sum);
    }

    return 0;
}

// Algorithm

// Take an input number from the user.
// Initialize a variable sum to 0.
// Use a loop that starts from 1 and goes up to the input number.
// Check if the input number is divisible by the loop variable using the modulus operator.
// If it is divisible, add the loop variable to the sum.
// After the loop finishes, the sum variable will hold the sum of factors of the input number.
// Print the sum variable.