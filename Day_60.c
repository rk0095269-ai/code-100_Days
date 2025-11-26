#include<stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int max;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value of k: ");
    scanf("%d", &k);
    
    printf("Maximum elements: ");
    
    for(i=0; i<=n-k; i++)
    {
        max = arr[i];  
        
        // Find maximum in current subarray
        for(j=i; j<i+k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }
        
        printf("%d ", max);
    }
    
    printf("\n");
    
    return 0;
}