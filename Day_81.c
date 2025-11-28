#include<stdio.h>

int main()
{
    enum week {SUN, MON, TUE, WED, THU, FRI, SAT};
    int i;
    
    printf("Day values:\n");
    
    i = SUN;
    printf("SUN = %d\n", i);
    
    i = MON;
    printf("MON = %d\n", i);
    
    i = TUE;
    printf("TUE = %d\n", i);
    
    i = WED;
    printf("WED = %d\n", i);
    
    i = THU;
    printf("THU = %d\n", i);
    
    i = FRI;
    printf("FRI = %d\n", i);
    
    i = SAT;
    printf("SAT = %d\n", i);
    
    return 0;
}