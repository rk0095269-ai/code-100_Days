//  Define a struct with enum Gender and print person's gender.
#include<stdio.h>
int main()
{
    enum Gender {MALE, FEMALE, OTHER};
    
    struct person
    {
        char name[50];
        int age;
        enum Gender gen;
    };
    struct person p;
    int g;
    
    printf("Enter name: ");
    scanf("%s", p.name);
    
    printf("Enter age: ");
    scanf("%d", &p.age);
    
    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", &g);
    p.gen = g;
    
    printf("\nPerson details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    
    if(p.gen == MALE)
    {
        printf("Gender: Male\n");
    }
    else if(p.gen == FEMALE)
    {
        printf("Gender: Female\n");
    }
    else if(p.gen == OTHER)
    {
        printf("Gender: Other\n");
    }
    else
    {
        printf("Gender: Invalid\n");
    }
    
    return 0;
}