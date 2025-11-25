#include<stdio.h>

int main()
{
    int n=12235555;
    int count[10]={0};
    int digit,max=0,most;
    
    printf("Number: %d\n",n);
    
    while(n>0)
    {
        digit=n%10;
        count[digit]++;
        n=n/10;
    }
    
    for(int i=0;i<10;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            most=i;
        }
    }
    
    printf("Most frequent digit: %d\n",most);
    printf("It appears %d times\n",max);
    
    return 0;
}
