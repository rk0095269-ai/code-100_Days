#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int n=7,k=3;
    int temp,i,j;
    
    printf("Original: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    for(j=0;j<k;j++)
    {
        temp=a[n-1];
        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    
    printf("\nAfter: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}
