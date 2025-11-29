// Find and print the student with the highest marks.
#include<stdio.h>

int main()
{
    struct Student
    {
        char name[50];
        int roll_no;
        float marks;
    };
    
    struct Student s[5];
    int i, high_index;
    float highest;
    
    printf("Enter details of 5 students:\n");
    
    for(i=0; i<5; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    
    // Find student with highest marks
    highest = s[0].marks;
    high_index = 0;
    
    for(i=1; i<5; i++)
    {
        if(s[i].marks > highest)
        {
            highest = s[i].marks;
            high_index = i;
        }
    }
    
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[high_index].name);
    printf("Roll No: %d\n", s[high_index].roll_no);
    printf("Marks: %.2f\n", s[high_index].marks);
    
    return 0;
}