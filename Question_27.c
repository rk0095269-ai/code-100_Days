#include<stdio.h>

int main() {
    int n, sum = 0;
    int i = 1;
    int count = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    while(count < n) {
        if(i % 2 != 0) {
            sum = sum + i;
            count = count + 1;
        }
        i = i + 1;
    }
    
    printf("Sum = %d\n", sum);
    
    return 0;
}
