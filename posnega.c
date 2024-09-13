#include<stdio.h>
 int main()
 {
    int a;
    printf("Enter the number:%d\n",a);
    scanf("%d",&a);
    if(a>0)
    {
        printf("The number is positive.\n");
    }
    else if(a<0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is 0.\n");
    }
return 0;

 }