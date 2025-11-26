#include<stdio.h>
int main()
{
    int n, i, x, pivot = -1;
    int left_sum, right_sum;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    // Check each number from 1 to n as potential pivot
    for(x=1; x<=n; x++)
    {
        left_sum = 0;
        right_sum = 0;
        
        // Calculate sum from 1 to x
        for(i=1; i<=x; i++)
        {
            left_sum = left_sum + i;
        }
        
        // Calculate sum from x to n
        for(i=x; i<=n; i++)
        {
            right_sum = right_sum + i;
        }
        
        // Check if sums are equal
        if(left_sum == right_sum)
        {
            pivot = x;
            break;  // Found pivot
        }
    }
    if(pivot != -1)
        printf("Pivot integer: %d\n", pivot);
    else
        printf("-1\n");
    
    return 0;
}