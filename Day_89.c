#include<stdio.h>

int main()
{
    enum numbers {FIRST = 5, SECOND, THIRD, FOURTH = 10, FIFTH};
    enum numbers n;
    
    printf("Showing enum values as integers:\n");
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);
    printf("FIFTH = %d\n", FIFTH);
    
    // Show they are just integers
    printf("\nProof they are integers:\n");
    int x = FIRST;
    printf("int x = FIRST; gives x = %d\n", x);
    
    n = THIRD;
    printf("enum n = THIRD; gives n = %d\n", n);
    
    return 0;
}