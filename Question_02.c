#include <stdio.h>
int main() {
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter second number: ");
    scanf("%d", &b);

   int  sum = a+b;
   int difference = a-b;
    int product =a*b;
   
    printf(" Sum = %d\n", sum);
    printf(" Difference = %d\n", difference);
    printf(" Product = %d\n", product);

    return 0;
}
