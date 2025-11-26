#include <stdio.h>

int main()
{
    int n, i, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of x: ");
    scanf("%d", &x);

    int ceilIndex = -1;

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            ceilIndex = i;
            break;
        }
    }

    printf("Ceil index: %d\n", ceilIndex);

    return 0;
}
