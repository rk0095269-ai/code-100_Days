//Find the transpose of a matrix.
#include<stdio.h>

int main()
{
    int a[10][10], t[10][10];
    int m, n, i, j;
    
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    
    // Reading matrix
    printf("Enter matrix elements:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Finding transpose
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    
    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    // Display transpose matrix
    printf("\nTranspose Matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}