#include<stdio.h>

int main() {
    int num, i;
    int binary[32];
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    i = 0;
    while(num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i = i + 1;
    }
    
    printf("1's complement: ");
    
    for(int j = i-1; j >= 0; j--) {
        if(binary[j] == 1) {
            printf("0");
        } else {
            printf("1");
        }
    }
    
    return 0;
}
