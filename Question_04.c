#include <stdio.h>

int main() {

    float radius, area, circumference;

   float PI = 3.14159;   

    printf("Enter the radius of the circle: ");

    scanf("%f", &radius);

    
    circumference = 2 * PI * radius;

    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
