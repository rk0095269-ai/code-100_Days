//Count characters in a string without using built-in length functions.
#include<stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Count characters until null character
    i = 0;
    while(str[i] != '\0')
    {
        count++;
        i++;
    }
    
    printf("String length = %d\n", count);
    
    return 0;
}