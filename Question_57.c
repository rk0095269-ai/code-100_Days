#include<stdio.h>

int main() {
    int num, i, total = 0;
    
    printf("How many numbers you want to add? ");
    scanf("%d", &num);
    
    int numbers[num];  
    
    printf("Enter your %d numbers one by one:\n", num);
    for(i = 0; i < num; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    
    for(i = 0; i < num; i++) {
        total = total + numbers[i];
    }
    
    printf("\nAlright! I added all your numbers...\n");
    printf("The total sum is: %d\n", total);
    printf("That's it! Done calculating.\n");
    
    return 0;
}
