#include<stdio.h>

int main()
{
    int arr[10] = {10,20,30,40,50,60};
    int n=6;
    int pos=3, ele=25;
    int i;

    printf("Before: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    //shift elements to right
    for(i=n;i>pos;i--)
    {
        arr[i] = arr[i-1];
    }

    //insert at position
    arr[pos] = ele;
    n++;

    printf("\nAfter: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
