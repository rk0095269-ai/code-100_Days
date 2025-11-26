#include<stdio.h>

int main()
{
    int nums[100], n, target, i, j;
    int found = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter target sum: ");
    scanf("%d", &target);
    
    // Check all pairs
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if(found == 1)
            break;
    }
    
    if(found == 0)
    {
        printf("-1 -1\n");
    }
    
    return 0;
}