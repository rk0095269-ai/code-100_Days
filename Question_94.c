// Find the longest word in a sentence.
#include<stdio.h>
int main()
{
    char str[200];
    int i, start = 0, end = 0;
    int max_len = 0, curr_len = 0;
    int max_start = 0, max_end = 0;
    
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    
    i = 0;
    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            curr_len = end - start;
            if(curr_len > max_len)
            {
                max_len = curr_len;
                max_start = start;
                max_end = end;
            }
            start = i + 1;
            end = i + 1;
            
            if(str[i] == '\0')
                break;
        }
        else
        {
            end++;
        }
        i++;
    }
    
    printf("Longest word: ");
    for(i = max_start; i < max_end; i++)
    {
        printf("%c", str[i]);
    }
    printf("\nLength = %d\n", max_len);
    
    return 0;
}