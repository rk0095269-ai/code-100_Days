#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[200];
    int i;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;

   
    for(i = 1; s[i] != '\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }

    printf("Sentence case: %s", s);

    return 0;
}