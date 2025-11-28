#include<stdio.h>
int main()
{
    enum traffic {RED, YELLOW, GREEN};
    
    printf("RED = Stop\n");
    printf("YELLOW = Wait\n");
    printf("GREEN = Go\n");
    
    // Just to show enum values
    printf("\nEnum values: RED=%d, YELLOW=%d, GREEN=%d\n", RED, YELLOW, GREEN);
    
    return 0;
}