//Perform diagonal traversal of a matrix.
#include<stdio.h>
int main()
{
    int mat[10][10];
    int r, c, i, j, k;
    
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
    
    // Diagonal traversal
    printf("Diagonal traversal:\n");
    
    // Print diagonals starting from first row
    for(k=0; k<r; k++)
    {
        i = k;
        j = 0;
        while(i >= 0 && j < c)
        {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    
    // Print diagonals starting from last column
    for(k=1; k<c; k++)
    {
        i = r-1;
        j = k;
        while(i >= 0 && j < c)
        {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    
    return 0;
}