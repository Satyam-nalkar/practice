#include<stdio.h>
int main()
 {
    int a;
    printf("Enter the integer:");
    scanf("%d",&a);
    if(a==10)
    {
    printf("result=%d\n",a/2);
    }
    else if(a==20)
    {
     printf("result=%d\n",a/3);
    }
    else if(a==30)
    {
        printf("result=%d\n",a/4);
    }
    else if(a==40)
    {
        printf("result=%d\n",a/5);
    }
    else
    {
       printf("Not match to value\n"); 
    }
  return 0;
 }