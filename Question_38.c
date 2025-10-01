#include <stdio.h>

int main() {
    int n, sum = 0, digit;

   
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n; 

    
    while (temp != 0) {
        digit = temp % 10; 
        sum += digit;      
        temp /= 10;
    }

    printf("Sum of digits of %d is %d\n", n, sum);

    return 0;
}
