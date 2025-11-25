#include<stdio.h>

int main()
{
    int a[15] = {3,8,12,17,25,30,42,56,71};
    int size=9;
    int x=20;
    int i,j;
    
    printf("Original: ");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    
    //find where to put
    for(i=0;i<size;i++)
    {
        if(a[i] > x)
            break;
    }
    
    //move everything right
    for(j=size;j>i;j--)
    {
        a[j] = a[j-1];
    }
    
    //put new element
    a[i] = x;
    size++;
    
    printf("\nAfter: ");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    
    return 0;
}
