// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    float r,a,c;
   float PI = 3.14159;   
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    c = 2 * PI * r;

    printf("Area of the circle = %f\n", a);
    printf("Circumference of the circle = %f\n", c);

    return 0;
}
