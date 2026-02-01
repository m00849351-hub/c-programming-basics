#include <stdio.h>
#define PI 3.14159//Define the value of PI
int main() {
float radius, area;

//Input the radius of the circle
printf("Enter the radius of the circle : ");
scanf("%f", &radius);

//Calculate the area of the circle
area = PI*radius*radius;

//Display the area
printf("The area of circle is : %2f\n", area);

return 0;
}
