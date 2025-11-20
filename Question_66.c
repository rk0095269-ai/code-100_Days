#include <stdio.h>

int main() {
    int arr[100] = {2, 4, 6, 8, 10};
    int n = 5;
    int x, i, pos;
    
    printf("Array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);       // Insert an element in a sorted array at the appropriate position.

    
    printf("\nEnter number to insert: ");
    scanf("%d", &x);
    
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > x) break;
    }
    
    for (i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = x;
    n++;
    
    printf("New array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    
    return 0;
}