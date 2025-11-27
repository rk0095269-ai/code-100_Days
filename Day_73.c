#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Enter file name: ");
    scanf("%s", fileName);

    fp = fopen(fileName, "r");

    if(fp == NULL)
    {
        printf("Could not open file.\n");
        return 0;
    }
    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
            lines++;

        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            if(inWord == 1)
            {
                words++;
                inWord = 0;
            }
        }
        else
        {
            inWord = 1;
        }
    }

    if(inWord == 1)
        words++;

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
