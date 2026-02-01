#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Loop runs until n becomes 0
    while (n != 0) {
        remainder = n % 10;   // Get the last digit
        sum = sum + remainder; // Add to sum
        n = n / 10;            // Remove the last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
