#include<stdio.h>

int main() {
    int n1, n2, lcm;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    
    lcm = n1;
    if(n2 > n1)
        lcm = n2;
    
    while(1) {
        if(lcm % n1 == 0) {
            if(lcm % n2 == 0) {
                break;
            }
        }
        lcm++;
    }
    
    printf("LCM is %d\n", lcm);
    return 0;
}
