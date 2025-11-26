//Convert a lowercase string to uppercase without using built-in functions.
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    i = 0;
    while(str[i] != '\0')
    {
        // Check if lowercase letter
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    
    printf("Uppercase string: %s\n", str);
    
    return 0;
}