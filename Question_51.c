#include <stdio.h>

int main() {
    int i, j, n = 5, start;

    for (i = n; i >= 1; i--) {
        
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        for (j = i; j <= n; j++) {
            printf("%d", j);
        }

        printf("\n"); 
    }

    return 0;
}
