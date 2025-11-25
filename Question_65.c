#include<stdio.h>

int main()
{
    int arr[] = {2,5,8,12,16,23,38,45,67,89};
    int n=10;
    int search=23;
    int low=0,high=n-1,mid;
    int found=0;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        
        if(arr[mid]==search)
        {
            found=1;
            break;
        }
        else if(arr[mid]<search)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    
    if(found==1)
        printf("Element %d found at index %d",search,mid);
    else
        printf("Element %d not found",search);
        
    return 0;
}
