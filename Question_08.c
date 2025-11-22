#include <stdio.h>

int main() {
    int x;
    printf("Enter a positive no x: ");
    scanf("%d",&x);

    int sum=0;
    for (int i=1; i<=x; i++) {
        sum +=i;
    }
    
    printf("The sum of the first %d natural numbers is: %d\n",x,sum);

    return 0;
}
