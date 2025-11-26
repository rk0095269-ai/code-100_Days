// Check if two strings are anagrams of each other.
#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, found, count = 0;
    
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    // Find length of first string
    i = 0;
    while(str1[i] != '\0')
    {
        len1++;
        i++;
    }
    
    // Find length of second string
    i = 0;
    while(str2[i] != '\0')
    {
        len2++;
        i++;
    }
    
    if(len1 != len2)
    {
        printf("Strings are not anagrams\n");
        return 0;
    }
    
    // Check if all characters in str1 are in str2
    for(i=0; i<len1; i++)
    {
        found = 0;
        for(j=0; j<len2; j++)
        {
            if(str1[i] == str2[j])
            {
                found = 1;
                str2[j] = ' '; // Mark as used
                break;
            }
        }
        if(found == 1)
            count++;
    }
    
    if(count == len1)
        printf("Strings are anagrams\n");
    else
        printf("Strings are not anagrams\n");
    
    return 0;
}