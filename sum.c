// Sum of number range

#include <stdio.h>

int main() {
    int start = 16, end = 25, i, sum = 0;

    for (i = start; i <= end; i++) {
        sum += i;
    }

    printf("The sum of numbers in the range %d to %d is: %d\n", start, end, sum);

    return 0;
}
