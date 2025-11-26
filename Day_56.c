#include<stdio.h>

int main()
{
    int arr[100], n, i, j;
    int next, found;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Next greater elements:\n");
    
    // Check each element
    for(i=0; i<n; i++)
    {
        found = 0;
        next = -1;
        // Look for next greater element on right side
        for(j=i+1; j<n; j++)
        {
            if(arr[j] > arr[i])
            {
                next = arr[j];
                found = 1;
                break;
            }
        }
        printf("%d -> %d\n", arr[i], next);
    }
    return 0;
}