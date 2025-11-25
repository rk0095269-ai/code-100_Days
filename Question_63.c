#include<stdio.h>

int main()
{
    int a[] = {1,3,5,7};
    int b[] = {2,4,6,8};
    int m=4,n=4;
    int c[8];
    int i,k=0;
    
    //copy first array
    for(i=0;i<m;i++)
    {
        c[k] = a[i];
        k++;
    }
    
    //copy second array
    for(i=0;i<n;i++)
    {
        c[k] = b[i];
        k++;
    }
    
    printf("Merged array: ");
    for(i=0;i<8;i++)
    {
        printf("%d ",c[i]);
    }
    
    return 0;
}
