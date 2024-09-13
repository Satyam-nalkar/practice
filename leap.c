#include<stdio.h>
int main()
 {
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    if(year % 4==0 )
    {
        printf("the year is leap year:\n");
    }    
        else
        {
            printf("the year is not leap year:\n");
        }
    
          return 0;
 }