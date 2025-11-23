#include<stdio.h>
int main() {
    int num, temp, firstDigit, lastDigit, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // get last digit
    lastDigit = temp % 10;

    // find first digit and find its place value
    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }
    firstDigit = temp;

    // remove first and last digit to get the middle part
    int middle = num % power;
    middle = middle / 10;

    // build final number
    int swapped = lastDigit * power + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
