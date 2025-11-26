// Check if the elements on the diagonal of a matrix are distinct.
#include<stdio.h>
int main()
{
    int mat[10][10];
    int n, i, j, flag = 0;
    
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
    
    // Check if diagonal elements are distinct
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(mat[i][i] == mat[j][j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }
    
    // Display result
    if(flag == 0)
        printf("All diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");
        
    return 0;
}