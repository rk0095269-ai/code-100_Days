#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[50];
    char ch;
    
    printf("Enter filename to read: ");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");
    
    if(fp == NULL)
    {
        printf("Error: File '%s' not found\n", filename);
        return 1;
    }
    
    printf("File contents:\n");
    printf("---\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    
    fclose(fp);
    
    return 0;
}