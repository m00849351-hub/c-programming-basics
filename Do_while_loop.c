#include <stdio.h>

int main() {
    double number, sum = 0;

    // The loop body runs at least once
    do {
        printf("Enter a number (enter 0 or negative to stop): ");
        scanf("%lf", &number);
        if (number > 0) {
            sum += number;
        }
    } while (number > 0); 

    printf("Total Sum: %.2lf\n", sum);
    return 0;
}
