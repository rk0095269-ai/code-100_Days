#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Employee
{
    char name[50];
    int emp_id;
    float salary;
    struct Date join_date;
};
int main()
{
    struct Employee emp;
    
    printf("Enter employee details:\n");
    
    printf("Enter name: ");
    scanf("%s", emp.name);
    
    printf("Enter employee ID: ");
    scanf("%d", &emp.emp_id);
    
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    
    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.join_date.day, &emp.join_date.month, &emp.join_date.year);
    
    printf("\nEmployee Information:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %d/%d/%d\n", emp.join_date.day, emp.join_date.month, emp.join_date.year);
    return 0;
}