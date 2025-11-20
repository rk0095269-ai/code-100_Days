#include <stdio.h>

int main() {
    int n, d, i, max = 0;
    int cnt[10] = {0};
    
    printf("Enter number: ");     // Find the digit that occurs the most times in an integer number.

    scanf("%d", &n);
    
    if (n < 0) n = -n;
    
    while (n > 0) {
        cnt[n % 10]++;
        n /= 10;
    }
    
    for (i = 1; i < 10; i++) {
        if (cnt[i] > cnt[max]) max = i;
    }
    
    printf("Most frequent: %d\n", max);
    return 0;
}