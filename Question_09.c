#include <stdio.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest, amount;
    int i;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    simpleInterest = (principal * rate * time) / 100;

   
    amount = principal;
    for (i = 1; i <= (int)time; i++) {
        amount = amount + (amount * rate / 100);
    }
    compoundInterest = amount - principal;

    
    printf("Simple Interest = %.2lf\n", simpleInterest);
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}
