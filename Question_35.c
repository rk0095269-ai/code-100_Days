#include<stdio.h>

int main() {
    int n, i;
    
    printf("Enter num: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i = i + 1) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
