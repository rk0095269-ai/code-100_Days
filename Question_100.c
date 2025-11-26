// Print all sub-strings of a string.
#include<stdio.h>
int main()
{
    char str[100];
    int i, j, k, len = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Find length
    i = 0;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    
    printf("All substrings:\n");
    
    // Generate all substrings
    for(i=0; i<len; i++)
    {
        for(j=i; j<len; j++)
        {
            for(k=i; k<=j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    
    return 0;
}