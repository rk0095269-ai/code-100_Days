// Remove all vowels from a string.
#include<stdio.h>
int main()
{
    char str[100], newstr[100];
    int i, j = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    i = 0;
    while(str[i] != '\0')
    {
        // Check if not vowel
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {
            newstr[j] = str[i];
            j++;
        }
        i++;
    }
    newstr[j] = '\0';
    
    printf("String without vowels: %s\n", newstr);
    
    return 0;
}