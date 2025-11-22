#include<stdio.h>

int main() {
    int sec;
    int h, m, s;
    
    printf("Enter seconds: ");
    scanf("%d", &sec);
    
    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = sec % 60;
    
    printf("Time is: %d:%d:%d\n", h, m, s);
    
    return 0;
}
