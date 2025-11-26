#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], t[100];
    int i, j, len1, len2;
    int count1, count2, anagram = 1;
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);
    
    len1 = strlen(s);
    len2 = strlen(t);
    
    if(len1 != len2)
    {
        printf("Not Anagram\n");
        return 0;
    }
    for(i=0; i<len1; i++)
    {
        count1 = 0;
        count2 = 0;
    
        for(j=0; j<len1; j++)
        {
            if(s[i] == s[j])
                count1++;
        }
        for(j=0; j<len2; j++)
        {
            if(s[i] == t[j])
                count2++;
        }
        if(count1 != count2)
        {
            anagram = 0;
            break;
        }
    }
    
    if(anagram == 1)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");
    
    return 0;
}