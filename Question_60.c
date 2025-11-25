#include<stdio.h>

int main()
{
    int arr[] = {4, -2, 0, 8, -5, 0, 3, -1, 7, 0};
    int n = 10;
    int pos = 0, neg = 0, zero = 0;
    int i;
    
    for(i=0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            pos++;
        }
        else if(arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zero numbers: %d\n", zero);
    
    return 0;
}
