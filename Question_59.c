#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Number of even elements = %d\n", evenCount);
    printf("Number of odd elements = %d\n", oddCount);

    return 0;
}
