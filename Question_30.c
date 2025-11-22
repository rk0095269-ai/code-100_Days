#include<stdio.h>

int main() {
    int n, rev = 0, r;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    int temp = n;
    
    while(n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    
    printf("Reverse of %d is %d\n", temp, rev);
    
    return 0;
}
