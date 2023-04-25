// LCM of two numbers

#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    for (lcm = max; lcm <= num1 * num2; lcm += max) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
    }

    printf("LCM of %d and %d is %d", num1, num2, lcm);

    return 0;
}

// Algorithm

// Take two input numbers from the user.
// Find the maximum of two numbers using the ternary operator.
// Use a loop that starts from the maximum of two numbers and goes up to the product of two numbers.
// Check if the current number is divisible by both input numbers using the modulus operator.
// If it is divisible by both input numbers, then it is the LCM. Exit the loop and print the result.
// If the loop finishes without finding the LCM, then the LCM is the product of two input numbers.