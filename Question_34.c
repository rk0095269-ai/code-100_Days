#include<stdio.h>

int main() {
    int num, i, flag = 0;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    for(i = 2; i < num; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0 && num > 1)
        printf("Prime\n");
    else
        printf("Not prime\n");
    
    return 0;
}
