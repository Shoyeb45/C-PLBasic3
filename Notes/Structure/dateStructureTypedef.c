#include<stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
}Date;
//Through Date we can directly access 

int main()
{
    Date Today; // This is like { struct date Today; }


    printf("Enter the today's day of the date:");
    scanf("%d",&Today.day);
    printf("Enter the today's month of the date:");
    scanf("%d",&Today.month);    
    printf("Enter the today's year of the date:");
    scanf("%d",&Today.year);
    
    printf("Tommorrow's Date : %d/%d/%d\n",Today.day-1, Today.month, Today.year);
    printf("Today's Date : %d/%d/%d\n",Today.day, Today.month, Today.year);
    printf("Yesterday's Date : %d/%d/%d\n",Today.day+1, Today.month, Today.year);


    return 0;
}