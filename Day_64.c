#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int i, j, k;
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    for(i = 0; i < n; i++)
    {
        int count = 1;
        for(j = i + 1; j < n; j++)
        {
            int repeat = 0;
            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }
            if(repeat == 1)
                break;
            else
                count++;
        }
        if(count > maxLen)
            maxLen = count;
    }
    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
