//Check if a matrix is symmetric.
#include<stdio.h>
int main()
{
    int mat[10][10];
    int n, i, j, flag = 1;
    
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    // Reading matrix
    printf("Enter matrix elements:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    
    // Check symmetric
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(mat[i][j] != mat[j][i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }
    
    // Display result
    if(flag == 1)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");
        
    return 0;
}