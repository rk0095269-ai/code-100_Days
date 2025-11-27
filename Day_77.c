#include<stdio.h>
int main()
{
    FILE *f1, *f2;
    char ch;
    
    f1 = fopen("input.txt", "r");
    if(f1 == NULL)
    {
        printf("Cannot open input.txt\n");
        return 0;
    }
    
    f2 = fopen("output.txt", "w");
    if(f2 == NULL)
    {
        printf("Cannot create output.txt\n");
        fclose(f1);
        return 0;
    }
    
    while(1)
    {
        ch = fgetc(f1);
        if(ch == EOF)
            break;

        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        
        fputc(ch, f2);
    }
    
    fclose(f1);
    fclose(f2);
    
    printf("File converted successfully\n");
    return 0;
}