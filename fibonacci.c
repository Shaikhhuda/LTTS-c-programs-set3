// Fibonacci series

#include <stdio.h>

int main() {
    int n, i, prev = 0, curr = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    printf("%d %d ", prev, curr);

    for (i = 3; i <= n; ++i) {
        next = prev + curr;
        printf("%d ", next);
        prev = curr;
        curr = next;
    }

    return 0;
}


// Algorithm

// Take an input number n from the user that specifies how many terms of the Fibonacci series to print.
// Initialize two variables prev and curr to 0 and 1 respectively. These variables will store the two previous numbers in the series.
// Print the first two terms of the series, which are prev and curr.
// Use a loop that starts from 3 and goes up to n.
// In each iteration, compute the next term of the series by adding prev and curr and store it in a variable next.
// Print the next term of the series.
// Update prev and curr to the values of the previous two terms in the series, i.e., prev becomes curr and curr becomes next.
// After the loop finishes, the Fibonacci series up to the nth term will be printed.