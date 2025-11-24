#include<stdio.h>

void main() {
    int n, i, j;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("\n");
    
    for(i = n; i >= 1; i--) {
    
        for(j = 1; j < i; j++) {
            printf(" ");
        }

        for(j = i; j <= n; j++) {
            printf("%d", j);
        }
        
        printf("\n");
    }
    
    printf("\nProgram ended successfully!\n");
    printf("Press Enter...");
    fflush(stdin);
    getchar();
}
