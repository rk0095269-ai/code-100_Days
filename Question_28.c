#include<stdio.h>

int main() {
    int n, i;
    int prod = 1;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            prod = prod * i;
        }
    }
    
    printf("Product of even numbers = %d\n", prod);
    
    return 0;
}
