//Reverse a string.
#include<stdio.h>
int main()
{
    char str[100], rev[100];
    int i, j, len = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Find length
    i = 0;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    // Reverse the string
    j = 0;
    for(i = len-1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    
    printf("Reversed string: %s\n", rev);
    
    return 0;
}