#include<stdio.h>

int main() {
    float p;
    char g;
    
    printf("Enter percentage: ");
    scanf("%f", &p);
    
    if(p >= 90) {
        g = 'A';
    } 
    else if(p >= 80) {
        g = 'B';
    } 
    else if(p >= 70) {
        g = 'C';
    } 
    else if(p >= 60) {
        g = 'D';
    } 
    else {
        g = 'F';
    }
    
    printf("Grade is %c\n", g);
    
    return 0;
    
}
