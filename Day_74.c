#include <stdio.h>
int main()
{
    FILE *src, *dest;
    char source_name[50], dest_name[50];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", source_name);

    printf("Enter destination file name: ");
    scanf("%s", dest_name);

    src = fopen(source_name, "r");
    if (src == NULL)
    {
        printf("Could not open source file.\n");
        return 1;
    }

    dest = fopen(dest_name, "w");
    if (dest == NULL)
    {
        printf("Could not create destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}