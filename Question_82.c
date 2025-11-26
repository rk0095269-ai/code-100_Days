#include<stdio.h>
int main()
{
    char str[100];
    int i;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Characters are:\n");
    
    i = 0;
    while(str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
    
    return 0;
}