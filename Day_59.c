#include<stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int sum, max_sum = -9999;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value of k: ");
    scanf("%d", &k);
    
    // Check each possible subarray of size k
    for(i=0; i<=n-k; i++)
    {
        sum = 0;
        // Calculate sum of current subarray
        for(j=i; j<i+k; j++)
        {
            sum = sum + arr[j];
        }
        // Update max_sum if current sum is larger
        if(sum > max_sum)
        {
            max_sum = sum;
        }
    }
    printf("Maximum sum of subarrays of size %d: %d\n", k, max_sum);
    return 0;
}