#include<stdio.h>

int main()
{
    int a[] = {1,2,3,4,5,6,7};
    int n = 7;
    int i,temp;
    
    printf("Original array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    
    // reverse logic
    for(i=0;i<n/2;i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    
    printf("Reversed array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}
