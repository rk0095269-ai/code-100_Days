//Count frequency of a given character in a string.
#include<stdio.h>
int main()
{
    char str[100], ch;
    int i, count = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    printf("Enter character to count: ");
    scanf(" %c", &ch);
    
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }
        i++;
    }
    
    printf("Frequency of '%c' = %d\n", ch, count);
    
    return 0;
}