// Return a structure containing top student's details from a function.
#include<stdio.h>
struct Student
{
    char name[25];
    int roll;
    float marks;
};
struct Student findTopStudent(struct Student s[], int n)
{
    struct Student top;
    int i;
    
    top = s[0];
    
    for(i=1; i<n; i++)
    {
        if(s[i].marks > top.marks)
        {
            top = s[i];
        }
    }
    
    return top;
}
int main()
{
    struct Student students[3];
    struct Student topper;
    int i;
    
    printf("Enter 3 student records:\n");
    
    for(i=0; i<3; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    topper = findTopStudent(students, 3);
    
    printf("\n--- TOPPER DETAILS ---\n");
    printf("Congratulations %s!\n", topper.name);
    printf("Roll Number: %d\n", topper.roll);
    printf("Marks Obtained: %.2f\n", topper.marks);
    return 0;
}