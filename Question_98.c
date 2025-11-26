// Print initials of a name with the surname displayed in full.
#include<stdio.h>
int main()
{
    char name[100];
    int i, last_space = 0;
    
    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    
    printf("Formatted name: ");
    
    // Find last space position
    i = 0;
    while(name[i] != '\0')
    {
        if(name[i] == ' ')
        {
            last_space = i;
        }
        i++;
    }
    
    // Print initials for first names
    i = 0;
    while(i < last_space)
    {
        if(i == 0 || name[i-1] == ' ')
        {
            printf("%c. ", name[i]);
        }
        i++;
    }
    
    // Print full surname
    i = last_space + 1;
    while(name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    
    printf("\n");
    
    return 0;
}