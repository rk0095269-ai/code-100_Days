#include<stdio.h>

int main()
{
    FILE *fp;
    char str[200];
    
    fp = fopen("info.txt", "r");
    
    if(fp == NULL)
    {
        printf("Error opening file\n");
        return 0;
    }
    
    printf("File contents:\n");
    

    while(!feof(fp))
    {
        fgets(str, 199, fp);
        printf("%s", str);
    }
    
    fclose(fp);
    
    return 0;
}