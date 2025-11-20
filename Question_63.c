#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int merged[6];
                                        // Merge two arrays

    for (int i = 0; i < 6; i++) {
        if (i < 3) {
            merged[i] = arr1[i];
        } else {
            merged[i] = arr2[i - 3];
        }
    }
    
    printf("Merged: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}