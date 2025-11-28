#include<stdio.h>

int main()
{
    enum month {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    
    printf("Days in each month:\n");
    
    printf("January: 31 days\n");
    printf("February: 28 days\n");
    printf("March: 31 days\n");
    printf("April: 30 days\n");
    printf("May: 31 days\n");
    printf("June: 30 days\n");
    printf("July: 31 days\n");
    printf("August: 31 days\n");
    printf("September: 30 days\n");
    printf("October: 31 days\n");
    printf("November: 30 days\n");
    printf("December: 31 days\n");
    
    return 0;
}