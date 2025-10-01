#include <stdio.h>

int main() {
    int groups[] = {1, 5, 3, 1}; 
    
    int numGroups = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < numGroups; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }

    return 0;
}
