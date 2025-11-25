#include<stdio.h>

int main()
{
    int arr[] = {23, 45, 12, 67, 89, 34, 56};
    int n = 7;
    int search, i, found = 0;
    int position;
    
    printf("Enter element to search: ");
    scanf("%d", &search);
    
    for(i=0; i<n; i++)
    {
        if(arr[i] == search)
        {
            found = 1;
            position = i;
            break;
        }
    }
    
    if(found == 1)
    {
        printf("Element %d found at position %d\n", search, position);
    }
    else
    {
        printf("Element %d not found in array\n", search);
    }
    
    return 0;
}
