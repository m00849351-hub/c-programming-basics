#include <stdio.h>
int main() {
    int n, i;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + 1;
    }
    
    printf("Sum of first %d number is %d\n", n, sum);
    return 0;
}
