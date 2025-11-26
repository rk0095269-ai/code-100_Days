//Replace spaces with hyphens in a string.
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
        if(str[i] == ' ')
        {
            str[i] = '-';
        }
        i++;
    }
    
    printf("Modified string: %s\n", str);
    
    return 0;
}