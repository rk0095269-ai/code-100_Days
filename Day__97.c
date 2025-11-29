// Store employee data in a binary file using fwrite() and read using fread().
#include<stdio.h>
struct Employee
{
    char name[30];
    int id;
    float sal;
};
int main()
{
    struct Employee e;
    FILE *f;
    
    f = fopen("emp_data.bin", "wb");
    if(f == NULL)
    {
        printf("File error\n");
        return 0;
    }
    
    printf("Enter employee data:\n");
    printf("Name: ");
    scanf("%s", e.name);
    printf("ID: ");
    scanf("%d", &e.id);
    printf("Salary: ");
    scanf("%f", &e.sal);
    
    fwrite(&e, sizeof(e), 1, f);
    fclose(f);
    
    printf("Data saved in binary file\n");
    
    return 0;
}