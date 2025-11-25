#include<stdio.h>

int main()
{
    int numbers[] = {2, 5, 8, 3, 10, 7, 4, 9, 6, 1};
    int n = 10;
    int even_count = 0, odd_count = 0;
    int i;
    
    // checking each number
    for(i=0; i<n; i++)
    {
        if(numbers[i] % 2 == 0)
        {
            even_count++;  // even number found
        }
        else
        {
            odd_count++;   // odd number found
        }
    }
    
    // printing results
    printf("Total even numbers: %d\n", even_count);
    printf("Total odd numbers: %d\n", odd_count);
    
    return 0;
}
