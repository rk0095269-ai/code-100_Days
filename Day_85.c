#include<stdio.h>

int main()
{
    enum codes {START = 10, NEXT, LAST, FINAL, END};
    int choice;
    
    printf("Enter a number (10-14): ");
    scanf("%d", &choice);
    
    if(choice == START)
        printf("You entered START\n");
    else if(choice == NEXT)
        printf("You entered NEXT\n");
    else if(choice == LAST)
        printf("You entered LAST\n");
    else if(choice == FINAL)
        printf("You entered FINAL\n");
    else if(choice == END)
        printf("You entered END\n");
    else
        printf("Invalid number\n");
        
    return 0;
}