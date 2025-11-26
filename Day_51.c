#include <stdio.h>

int main()
{
    int n, i, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    /* find first occurrence */
    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            first = i;
            break;
        }
    }

    /* find last occurrence */
    for(i = n - 1; i >= 0; i--)
    {
        if(nums[i] == target)
        {
            last = i;
            break;
        }
    }
    printf("First occurrence index: %d\n", first);
    printf("Last occurrence index: %d\n", last);

    return 0;
}
