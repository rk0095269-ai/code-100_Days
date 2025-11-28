#include<stdio.h>
int main()
{
    enum colors {RED, GREEN, BLUE, YELLOW, BLACK, WHITE};
    int i;
    
    printf("Color values:\n");
    
    for(i = RED; i <= WHITE; i++)
    {
        switch(i)
        {
            case RED:
                printf("RED = %d\n", i);
                break;
            case GREEN:
                printf("GREEN = %d\n", i);
                break;
            case BLUE:
                printf("BLUE = %d\n", i);
                break;
            case YELLOW:
                printf("YELLOW = %d\n", i);
                break;
            case BLACK:
                printf("BLACK = %d\n", i);
                break;
            case WHITE:
                printf("WHITE = %d\n", i);
                break;
        }
    }
    
    return 0;
}