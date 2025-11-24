#include <stdio.h>

int main() {
    int i, j, space, stars;

    for(i = 1; i <= 4; i++) {
        for(space = 1; space <= 4 - i; space++) {
            printf(" ");
        }
        for(stars = 1; stars <= 2*i - 1; stars++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = 3; i >= 1; i--) {
        for(space = 1; space <= 4 - i; space++) {
            printf(" ");
        }
        for(stars = 1; stars <= 2*i - 1; stars++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
