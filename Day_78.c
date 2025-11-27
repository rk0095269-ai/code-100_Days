//  Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;
    fp = fopen("input.txt", "r");
    if(fp == NULL)
    {
        printf("Cannot open input.txt\n");
        return 0;
    }
    
    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if(ch >= 'A' && ch <= 'Z')
            {
                ch = ch + 32;
            }
            
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    
    fclose(fp);
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}