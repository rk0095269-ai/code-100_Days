// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include<stdio.h>
int main()
{
    enum operations {ADD=1, SUB, MUL, QUIT};
    int op, x, y, ans;
    
    while(1)
    {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Quit\n");
        printf("Choose: ");
        scanf("%d", &op);
        
        if(op == QUIT)
        {
            printf("Program ended\n");
            break;
        }
        
        printf("Enter first number: ");
        scanf("%d", &x);
        printf("Enter second number: ");
        scanf("%d", &y);
        
        switch(op)
        {
            case ADD:
                ans = x + y;
                printf("Addition: %d\n", ans);
                break;
                
            case SUB:
                ans = x - y;
                printf("Subtraction: %d\n", ans);
                break;
                
            case MUL:
                ans = x * y;
                printf("Multiplication: %d\n", ans);
                break;
                
            default:
                printf("Wrong option\n");
        }
    }
    
    return 0;
}