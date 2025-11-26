// Reverse each word in a sentence without changing the word order.
#include<stdio.h>
int main()
{
    char str[200], result[200];
    int i, j, start = 0, end = 0, k = 0;
    
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    
    i = 0;
    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            // Reverse current word
            for(j = end-1; j >= start; j--)
            {
                result[k] = str[j];
                k++;
            }
            
            // Add space or null terminator
            if(str[i] == ' ')
            {
                result[k] = ' ';
                k++;
            }
            else
            {
                result[k] = '\0';
                break;
            }
            
            start = i + 1;
            end = i + 1;
        }
        else
        {
            end++;
        }
        i++;
    }
    
    printf("Result: %s\n", result);
    
    return 0;
}