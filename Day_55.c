#include<stdio.h>

int main()
{
    int nums[100], n, i, j;
    int count, majority = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for(i=0; i<n; i++)
    {
        count = 0;
        // Count occurrences of current element
        for(j=0; j<n; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }
        // Check if count is more than n/2
        if(count > n/2)
        {
            majority = nums[i];
            break;  // Found majority element
        }
    }
    printf("Majority element: %d\n", majority);
    return 0;
}