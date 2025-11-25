#include<stdio.h>

int main()
{
    int arr[7] = {10, 50, 32, 99, 7, 63, 18};
    int n = 7;
    int min, max, i;
    
    // finding min and max
    min = arr[0];
    max = arr[0];
    
    for(i=1; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }
    
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
    
    return 0;
}
