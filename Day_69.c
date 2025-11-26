#include<stdio.h>

int main()
{
    int arr[100], count[100] = {0};
    int n, i, repeated = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements (one element repeated): ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
        
        if(count[arr[i]] > 1)
        {
            repeated = arr[i];
        }
    }
    
    printf("Repeated element: %d\n", repeated);
    
    return 0;
}