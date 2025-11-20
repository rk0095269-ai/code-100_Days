#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 15, 25, 30};
    int n = 6;
    int i, j, temp;
    
    printf("Array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("\nSecond largest: %d\n", arr[n - 2]);
    return 0;
}