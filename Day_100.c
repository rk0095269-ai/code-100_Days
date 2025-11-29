#include <stdio.h>
struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    struct Employee *p1, *p2;
    
    p1 = &e1;
    p2 = &e2;
    
    printf("First Employee:\n");
    strcpy(p1->name, "Alice");
    p1->id = 1001;
    p1->salary = 25000.50;
    
    printf("Name: %s\n", p1->name);
    printf("ID: %d\n", p1->id);
    printf("Salary: %.2f\n", p1->salary);
    
    printf("\n");
    
    printf("Second Employee:\n");
    strcpy(p2->name, "Bob");
    p2->id = 1002;
    p2->salary = 30000.75;
    
    printf("Name: %s\n", p2->name);
    printf("ID: %d\n", p2->id);
    printf("Salary: %.2f\n", p2->salary);
    
    return 0;
}