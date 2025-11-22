#include<stdio.h>

int main() {
    int m;
    
    printf("Enter month no: ");
    scanf("%d", &m);
    
    switch(m) {
        case 1: printf("Jan 31 days\n"); break;
        case 2: printf("Feb 28 days\n"); break;
        case 3: printf("Mar 31 days\n"); break;
        case 4: printf("Apr 30 days\n"); break;
        case 5: printf("May 31 days\n"); break;
        case 6: printf("Jun 30 days\n"); break;
        case 7: printf("Jul 31 days\n"); break;
        case 8: printf("Aug 31 days\n"); break;
        case 9: printf("Sep 30 days\n"); break;
        case 10: printf("Oct 31 days\n"); break;
        case 11: printf("Nov 30 days\n"); break;
        case 12: printf("Dec 31 days\n"); break;
        default: printf("Wrong number\n");
    }
    return 0;  
}
