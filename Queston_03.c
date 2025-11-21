// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {
    float l;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    float b;
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
   float area = l*b;
     float perimeter = 2 * (l+b);

    printf("Area of the rectangle = %f\n", area);
    printf("Perimeter of the rectangle = %f\n", perimeter);

    return 0;
}
