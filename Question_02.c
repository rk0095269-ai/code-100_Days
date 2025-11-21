#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

   int  sum = a+b;
   int difference = a-b;
   int product =a*b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    return 0;
}
