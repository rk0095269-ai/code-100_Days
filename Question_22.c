#include<stdio.h>

int main() {
    float cp, sp, profit, loss;
    
    printf("Enter cost price: ");
    scanf("%f", &cp);
    
    printf("Enter selling price: ");
    scanf("%f", &sp);
    
    if(sp > cp) {
        profit = sp - cp;
        printf("Profit = %f\n", profit);
    }
    else if(cp > sp) {
        loss = cp - sp;
        printf("Loss = %f\n", loss);
    }
    else {
        printf("No profit no loss\n");
    }
    
    return 0;
}
