//Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
int main()
{
    int a[10][10];
    int n, i, j, sum = 0;
    
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    // Reading matrix
    printf("Enter matrix elements:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Calculate sum of diagonal
    for(i=0; i<n; i++)
    {
        sum = sum + a[i][i];
    }
    
    // Display result
    printf("Sum of diagonal elements = %d\n", sum);
    
    return 0;
}