#include <stdio.h>
int main() {
float base, height, area;

//Intput values for base and height
printf("Enter the base of the triangle : ");
scanf("%f", &base);

//Input the height of the triangle
printf("Enter the height of the triangle : ");
scanf("%f", &height);

//calculate the area of the triangle
area = 0.5*base*height;

//Display the entered value and the calaculated area
printf("The area of the triangle is : %2f\n", area);

return 0;
}
