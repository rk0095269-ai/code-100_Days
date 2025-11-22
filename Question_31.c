#include<stdio.h>

int main() {
    int num, i = 0;
    int arr[32];
    
    printf("Enter number: ");
    scanf("%d", &num);
    
   
    while(num > 0) {
        arr[i] = num % 2;
        num = num / 2;
        i = i + 1;
    }
    
    printf("Binary: ");
    
   
    for(int k = i-1; k >= 0; k--) {
        printf("%d", arr[k]);
    }
    
    return 0;
}
