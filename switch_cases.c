#include <stdio.h>

int main() {
    int month, days;

    printf("Enter month (1-12) : ");
    scanf("%d", &month); // 'sacnf' ko 'scanf' kiya

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break; // Break lagana zaroori hai
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28; 
            break;
        default:
            printf("Invalid input! please enter a number between 1 to 12.\n");
            return 1;
    }

    printf("Number of days in month %d is: %d\n", month, days); // '%dm' ko '%d\n' kiya
    return 0;
}

or

#include <stdio.h>

int main() {
    char op;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch(op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0)
                printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Error! Operator is not correct");
    }

    return 0;
}
