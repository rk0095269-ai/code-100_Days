#include<stdio.h>

int main() {
    int n, rev = 0, rem;
    int orig;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    orig = n;
    
    // Reverse the number
    while(n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    
    // Check if palindrome
    if(orig == rev) {
        printf("Number is palindrome\n");
    } else {
        printf("Number is not palindrome\n");
    }
    
    return 0;
}
