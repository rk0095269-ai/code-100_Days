#include<stdio.h>

int main() {
    int n, a, b, c, sum;
    
    printf("Enter 3 digit number: ");
    scanf("%d", &n);
    
    a = n / 100;
    b = (n % 100) / 10;
    c = n % 10;
    
    sum = (a*a*a) + (b*b*b) + (c*c*c);
    
    if(n == sum)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong\n");
    
    return 0;
}
