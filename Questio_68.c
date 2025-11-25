#include<stdio.h>

int main()
{
    int a[8] = {5,12,8,3,15,7,9,4};
    int n=8;
    int del=8;
    int i,j;
    int found=0;
    
    printf("Before: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    //find element
    for(i=0;i<n;i++)
    {
        if(a[i]==del)
        {
            found=1;
            //shift elements left
            for(j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            n--;
            break;
        }
    }
    
    if(found==0)
        printf("\nElement not found");
    else
    {
        printf("\nAfter: ");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    }
    
    return 0;
}
