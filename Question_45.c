#include<stdio.h>

void main() {
    int n, i;
    float ans = 0.0;
    int a, b;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    b = 3;  
    
    printf("\nWorking:\n");
    for(i = 1; i <= n; i++) {
        a = 2 * i;
        ans = ans + (float)a / b;
        
        if(i == 1) 
            printf("%d/%d", a, b);
        else 
            printf(" + %d/%d", a, b);
            
        b = b + 4;
    }
    
    printf("\n\nAnswer = %.3f\n", ans);
    
    printf("\n--- Program ended ---\n");
    printf("Press Enter twice to close...");
    fflush(stdin);
    getchar();
    getchar();
}
