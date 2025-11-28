#include<stdio.h>
int main()
{
    enum result {SUCCESS, FAILURE, TIMEOUT};
    enum result r;
    int n;
    
    printf("Enter result (0,1,2): ");
    scanf("%d", &n);
    
    r = n;
    
    switch(r)
    {
        case SUCCESS:
            printf("Success! Everything worked.\n");
            break;
        case FAILURE:
            printf("Failed! Something went wrong.\n");
            break;
        case TIMEOUT:
            printf("Timeout! Too slow.\n");
            break;
        default:
            printf("Unknown result\n");
    }
    
    return 0;
}