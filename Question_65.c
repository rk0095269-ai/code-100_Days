#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 67, 89};
    int n = 10;
    int target, low = 0, high = n - 1, mid, found = 0;
    
    printf("Enter number to search: ");
    scanf("%d", &target);
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == target) {
            printf("Found at position %d\n", mid);      // Search in a sorted array using binary search.

            found = 1;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    if (!found) {
        printf("Not found\n");
    }
    
    return 0;
}