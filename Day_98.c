#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int rollno;
    float percentage;
};

int main() {

    struct Student s1, s2;
    
    printf("Enter details for first student:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll No: ");
    scanf("%d", &s1.rollno);
    printf("Percentage: ");
    scanf("%f", &s1.percentage);
    
    printf("\n");

    printf("Enter details for second student:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll No: ");
    scanf("%d", &s2.rollno);
    printf("Percentage: ");
    scanf("%f", &s2.percentage);
    
    printf("\n");
    
    int isSame = 1; 
    
    if(strcmp(s1.name, s2.name) != 0) {
        isSame = 0;
    }
    
    if(s1.rollno != s2.rollno) {
        isSame = 0;
    }
    
    if(s1.percentage != s2.percentage) {
        isSame = 0;
    }

    if(isSame == 1) {
        printf("Both students are identical\n");
    } else {
        printf("Students are different\n");
    }
    return 0;
}