#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k, i, j, temp;
    
    printf("Array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    
    printf("\nEnter k: ");
    scanf("%d", &k);
    k = k % n; 
    
    for (i = 0; i < k; i++) {
     
        temp = arr[n - 1];
        
        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
    
        arr[0] = temp;
    }
    
    printf("Rotated array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    
    return 0;
}