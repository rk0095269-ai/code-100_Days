#include<stdio.h>

int main() {
    float a, b, c;
    
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if(a + b > c && a + c > b && b + c > a) {
    
        if(a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        else if(a == b || a == c || b == c) {
            printf("Isosceles triangle\n");
        }
        else {
            printf("Scalene triangle\n");
        }
    }
    else {
        printf("Not a valid triangle!\n");
    }
    
    return 0;
}
