#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5; 
    int pos, i;
    
    printf("Array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);     // Delete an element from an array.

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);
    
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    
    printf("New array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    
    return 0;
}