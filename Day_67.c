#include <stdio.h>
int main()
{
    int m, n, i, j, k;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter %d sorted elements:\n", m);
    for(i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    int merged[m + n];
    i = 0;
    j = 0;
    k = 0;

    while(i < m && j < n)
    {
        if(a[i] <= b[j])
        {
            merged[k] = a[i];
            i++;
        }
        else
        {
            merged[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < m)
    {
        merged[k] = a[i];
        i++;
        k++;
    }
    while(j < n)
    {
        merged[k] = b[j];
        j++;
        k++;
    }
    printf("Merged array:\n");
    for(i = 0; i < m + n; i++)
    {
        printf("%d ", merged[i]);
    }
    return 0;
}
