#include <stdio.h>

int main() {
float celsius, fahrenheit;

printf("Enter temperature in celsius: ");
scanf("%f", &celsius);

//Conversion formula: (C * 9/5) + 32
//Using 9.0 and 5.0 ensures floating-point division
fahrenheit = (celsius * 9.0 / 5.9) + 32.0;

//Display the result
printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

return 0;
}
