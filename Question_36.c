#include<stdio.h>

int main() {
    int a, b, i, g;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    for(i = 1; i <= a; i++) {
        if(i <= b) {
            if(a % i == 0) {
                if(b % i == 0) {
                    g = i;
                }
            }
        }
    }
    
    printf("GCD is %d\n", g);
    
    return 0;
}
