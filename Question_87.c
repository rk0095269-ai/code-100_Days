//Count spaces, digits, and special characters in a string.
#include<stdio.h>
int main()
{
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    i = 0;
    while(str[i] != '\0')
    {
        // Check for space
        if(str[i] == ' ')
        {
            spaces++;
        }
        // Check for digit
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        // Check for alphabet (if not space, not digit, not alphabet then special)
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            // Do nothing for alphabets
        }
        else
        {
            special++;
        }
        i++;
    }
    
    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);
    
    return 0;
}