#include <stdio.h>

int main() {
    int num, n, firstDigit, lastDigit, swappedNum, place = 1, middlePart;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;
    lastDigit = n % 10; 

    while (n >= 10) {
        n = n / 10;
        place = place * 10;
    }
    firstDigit = n;

    middlePart = num % place;     
    middlePart = middlePart / 10;
   
    swappedNum = lastDigit * place + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
