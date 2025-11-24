#include<stdio.h>

int main() {
    int n, orig, d, s = 0, f, i;  
    
    printf("Enter number : ");  
    scanf("%d", &n);
    
    orig = n;

    while(n > 0) {
        d = n % 10;
        f = 1;
        i = 1;
        while(i <= d) {  
            f = f * i;
            i++;
        }
        
        s = s + f;
        n = n / 10;
    }
    
    if(s == orig)
        printf("%d is STRONG\n", orig);  
    else
        printf("%d NOT strong\n", orig);
        
    getchar();  
    return 0;
}
