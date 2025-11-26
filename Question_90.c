//Toggle case of each character in a string.
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    i = 0;
    while(str[i] != '\0')
    {
        // If uppercase, convert to lowercase
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        // If lowercase, convert to uppercase
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    
    printf("Toggled case string: %s\n", str);
    
    return 0;
}