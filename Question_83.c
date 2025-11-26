//Count vowels and consonants in a string.
#include<stdio.h>
int main()
{
    char str[100];
    int i, vowels = 0, consonants = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    i = 0;
    while(str[i] != '\0')
    {
        // Check if alphabet
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            // Check for vowels
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        i++;
    }
    
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    return 0;
}