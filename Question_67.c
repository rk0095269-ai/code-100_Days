#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int x, pos, i;
    
    printf("Array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);         //  Insert an element in an array at a given position.

    
    printf("\nEnter element and position: ");
    scanf("%d %d", &x, &pos);
    
    for (i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = x;
    n++;
    
    printf("New array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    
    return 0;
}