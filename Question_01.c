#include <stdio.h>

int main() {
    int x,y;
    
    printf("Enter first number: ");
    scanf("%d", &x);
    
    printf("Enter second number: ");
    scanf("%d", &y);
    int sum =x+y;
    printf("The sum of 1st and 2nd number is %d",sum);
    
    return 0;
}
