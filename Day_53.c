#include<stdio.h>
int main()
{
    int arr[100], n, i, j;
    int left_sum, right_sum, pivot = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Check each index as potential pivot
    for(i=0; i<n; i++)
    {
        left_sum = 0;
        right_sum = 0;
        
        // Calculate left sum
        for(j=0; j<i; j++)
        {
            left_sum = left_sum + arr[j];
        }
        
        // Calculate right sum
        for(j=i+1; j<n; j++)
        {
            right_sum = right_sum + arr[j];
        }
        
        // Check if sums are equal
        if(left_sum == right_sum)
        {
            pivot = i;
            break;  // Found leftmost pivot
        }
    }
    
    printf("Pivot index: %d\n", pivot);
    
    return 0;
}