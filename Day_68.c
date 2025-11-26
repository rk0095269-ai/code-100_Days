#include<stdio.h>
int main()
{
    int arr[100], n, i, j;
    int found, missing = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements (0 to %d with one missing): ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<=n; i++)
    {
        found = 0;
        
        for(j=0; j<n; j++)
        {
            if(arr[j] == i)
            {
                found = 1;
                break;
            }
        }
        
        if(found == 0)
        {
            missing = i;
            break;
        }
    }
    
    printf("Missing number: %d\n", missing);
    
    return 0;
}