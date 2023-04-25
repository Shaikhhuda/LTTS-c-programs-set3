// Find the given number is prime number or not

#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    }
    else {
        for (i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number", num);
    }
    else {
        printf("%d is not a prime number", num);
    }

    return 0;
}




// Algorithm

// Take an input number from the user.
// Initialize a variable isPrime to 1. This variable will be used to store if the number is prime or not.
// Use a loop that starts from 2 and goes up to the square root of the input number.
// Check if the input number is divisible by the loop variable using the modulus operator.
// If it is divisible, set the isPrime variable to 0 and break out of the loop since we have found a factor other than 1 and itself.
// After the loop finishes, check the value of the isPrime variable. If it is 1, then the number is prime. If it is 0, then the number is not prime.
// Print the result accordingly.