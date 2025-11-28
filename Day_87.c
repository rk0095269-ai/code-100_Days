#include<stdio.h>

int main()
{
    enum access {ADMIN, USER, GUEST};
    
    printf("Role Permissions:\n");
    
    printf("ADMIN: Full system access\n");
    printf("USER: Standard user access\n");
    printf("GUEST: Read-only access\n");
    
    enum access a = ADMIN;
    if(a == ADMIN)
    {
        printf("\nExample: ADMIN role has highest privileges\n");
    }
    
    return 0;
}