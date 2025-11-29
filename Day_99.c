#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {

    struct student *s = (struct student*)malloc(sizeof(struct student));

    if(s == NULL) {
        printf("Sorry! Memory not available\n");
        return 0;
    }
    
    printf("Memory allocated successfully!\n\n");
    
    printf("Enter student name: ");
    scanf("%s", s->name);
    
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    
    printf("Enter marks: ");
    scanf("%f", &s->marks);
    
    printf("\n");
    
    printf("Student Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);
    
    free(s);
    printf("\nMemory freed!\n");
    
    return 0;
}