#include<stdio.h>
int main()
{
    int a[]={12,35,8,42,19,56,23};
    int n=7;
    int max1,max2,i;
    
    if(a[0]>a[1])
    {
        max1=a[0];
        max2=a[1];
    }
    else
    {
        max1=a[1];
        max2=a[0];
    }
    
    for(i=2;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]!=max1)
        {
            max2=a[i];
        }
    }
    
    printf("Second largest: %d",max2);
    return 0;
}
