#include<stdio.h>
int main() {
    int num, temp, firstDigit, lastDigit, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    lastDigit = temp % 10;

    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }
    firstDigit = temp;

    int middle = num % power;
    middle = middle / 10;

    int swapped = lastDigit * power + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
