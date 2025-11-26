#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Previous Greater Elements:\n");

    for(i = 0; i < n; i++)
    {
        int prevGreater = -1;

        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                prevGreater = j;   
                break;
            }
        }
        if(prevGreater == -1)
            printf("-1");
        else
            printf("%d", arr[prevGreater]);

        if(i != n - 1)
            printf(", ");
    }
    return 0;
}
