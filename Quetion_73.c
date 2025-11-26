//Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main()
{
    int mat[10][10], sum[10];
    int r, c, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    // Reading matrix
    printf("Enter matrix elements:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    
    // Calculate row sums
    for(i=0; i<r; i++)
    {
        sum[i] = 0;  // Initialize sum
        for(j=0; j<c; j++)
        {
            sum[i] = sum[i] + mat[i][j];
        }
    }
    
    // Display results
    printf("\nRow sums are:\n");
    for(i=0; i<r; i++)
    {
        printf("Row %d sum = %d\n", i+1, sum[i]);
    }
    
    return 0;
}