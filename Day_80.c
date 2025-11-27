#include<stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    fp = fopen("students.txt", "w");
    if(fp == NULL)
    {
        printf("Cannot create file\n");
        return 0;
    }
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        printf("Enter name, roll, marks for student %d: ", i+1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    
    fclose(fp);
    
    fp = fopen("students.txt", "r");
    if(fp == NULL)
    {
        printf("Cannot open file\n");
        return 0;
    }
    
    printf("\nStudent records:\n");
    printf("Name\tRoll\tMarks\n");
    
    while(fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF)
    {
        printf("%s\t%d\t%d\n", name, roll, marks);
    }
    
    fclose(fp);
    
    return 0;
}