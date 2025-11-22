#include<stdio.h>
int main() {
    float cp, sp, p, l, per;
    
    printf("Enter cost price: ");
    scanf("%f", &cp);
    
    printf("Enter selling price: ");
    scanf("%f", &sp);
    
    if(sp > cp) {
        p = sp - cp;
        per = (p/cp)*100;
        printf("Profit = %.2f\n", p);
        printf("Profit percentage = %.2f\n", per);
    }
    else if(cp > sp) {
        l = cp - sp;
        per = (l/cp)*100;
        printf("Loss = %.2f\n", l);
        printf("Loss percentage = %.2f\n", per);
    }
    else {
        printf("No profit no loss\n");
    }
    return 0; 
}
