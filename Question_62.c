#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    
    for (int i = 0, j = n - 1; i < j; i++, j--) {                   
        int temp = arr[i];                          //Reverse an array without taking extra space.

        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}