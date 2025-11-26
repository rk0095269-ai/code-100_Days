// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include<stdio.h>
int main()
{
    char date[20], newdate[20];
    int dd, mm, yyyy;
    char month[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);
    
    // Extract day, month, year
    sscanf(date, "%d/%d/%d", &dd, &mm, &yyyy);
    
    // Create new date format
    sprintf(newdate, "%d-%s-%d", dd, month[mm-1], yyyy);
    
    printf("New format: %s\n", newdate);
    
    return 0;
}