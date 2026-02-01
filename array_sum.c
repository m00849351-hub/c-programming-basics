#include <stdio.h>
int main() {
    int arr[100], n, i, sum = 0;
    
    printf("Enter number of element: ");
    scanf("%d", &n);
    
    printf("Enter %d element:\n", n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of array element = %d\n", sum);
    return 0;
}
