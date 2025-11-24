#include<stdio.h>

void main() {  
    int n, i;
    float s = 0.0;
    
    printf("Enter n value: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        int a, b;
        a = 2*i - 1;
        b = 2*i;
        
        s = s + (float)a / b;  
    }
    
    printf("Series sum = %.3f\n", s);
    
    
    printf("Press enter to exit...");
    getchar();
    getchar();
}
