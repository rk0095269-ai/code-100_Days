  
#include <stdio.h>

int main() {
    int arr[] = {10, 25, 8, 14, 3, 19};
    int n = 6;
    int target;
    
    printf("Enter number to search: ");      // Search for an element in an array using linear search.
 
    scanf("%d", &target);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Found at index %d\n", i);
            return 0; 
        }
    }
    
    printf("Not found\n");
    return 0;
}