#include<stdio.h>

int main() {
    int u;
    float b;
    
    printf("Enter units: ");
    scanf("%d", &u);
    
    if(u <= 100) {
        b = u * 5;
    }
    else if(u <= 200) {
        b = 500 + (u-100)*7;
    }
    else if(u <= 300) {
        b = 500 + 700 + (u-200)*10;
    }
    else {
        b = 500 + 700 + 1000 + (u-300)*12;
    }
    
    printf("Bill = %.2f\n", b);
    
    return 0;
}
