// Check if a string is a palindrome.
#include<stdio.h>
int main()
{
    char str[100];
    int i, j, len = 0, flag = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Find length
    i = 0;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    
    // Check palindrome
    i = 0;
    j = len - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    
    if(flag == 1)
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");
    
    return 0;
}