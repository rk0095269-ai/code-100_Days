// Check if one string is a rotation of another.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], temp[200];
    int i, j, len1, len2, found = 0;
    
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    if(len1 != len2)
    {
        printf("Strings are not rotations\n");
        return 0;
    }
    
    // Create temp string with str1 concatenated twice
    for(i=0; i<len1; i++)
    {
        temp[i] = str1[i];
    }
    for(j=0; j<len1; j++)
    {
        temp[i+j] = str1[j];
    }
    temp[i+j] = '\0';
    
    // Check if str2 is substring of temp
    for(i=0; i<len1; i++)
    {
        found = 1;
        for(j=0; j<len2; j++)
        {
            if(temp[i+j] != str2[j])
            {
                found = 0;
                break;
            }
        }
        if(found == 1)
            break;
    }
    
    if(found == 1)
        printf("Strings are rotations\n");
    else
        printf("Strings are not rotations\n");
    
    return 0;
}