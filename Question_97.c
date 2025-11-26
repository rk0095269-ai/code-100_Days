// Print the initials of a name.
#include<stdio.h>
int main()
{
    char name[100];
    int i;
    
    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    
    printf("Initials: ");
    
    // Print first character as initial
    if(name[0] != ' ')
    {
        printf("%c", name[0]);
    }
    
    i = 1;
    while(name[i] != '\0')
    {
        // If current is space and next is not space, print next as initial
        if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
        {
            printf("%c", name[i+1]);
        }
        i++;
    }
    
    printf("\n");
    
    return 0;
}