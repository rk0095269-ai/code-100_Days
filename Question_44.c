#include<stdio.h>

void main() {
    int n, i;
    float s = 0.0;
    int num, denom;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    denom = 3;  
    

    for(i = 1; i <= n; i++) {
        num = 2 * i;
        
        s = s + (float)num / denom;
        
        denom += 4;  
    }
    

    printf("Sum = %.4f\n", s);
    
    printf("Done! Press enter...");
    fflush(stdin);
    getchar();
}
