#include <stdio.h>

int main() {
    double p, r, t;
    double si;
    
    printf("Enter principal amount: ");
    scanf("%lf", &p);
    
    printf("Enter rate of interest: ");
    scanf("%lf", &r);
    
    printf("Enter time in years: ");
    scanf("%lf", &t);
    
    // Simple interest
    si = (p * r * t) / 100;

    printf("Simple Interest = %.2lf\n", si);
   
    return 0;
}
