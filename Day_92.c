// Store details of 5 students in an array of structures and print all.
#include<stdio.h>
int main()
{
    struct Student
    {
        char name[30];
        int roll;
        float marks;
    };
    
    struct Student stu[5];
    int i;
    
    // Input
    for(i=0; i<5; i++)
    {
        printf("Enter details for student %d\n", i+1);
        printf("Name: ");
        scanf("%s", stu[i].name);
        printf("Roll: ");
        scanf("%d", &stu[i].roll);
        printf("Marks: ");
        scanf("%f", &stu[i].marks);
    }
    
    // Output
    printf("\nAll Students Information:\n");
    for(i=0; i<5; i++)
    {
        printf("%s\t%d\t%.1f\n", stu[i].name, stu[i].roll, stu[i].marks);
    }
    
    return 0;
}