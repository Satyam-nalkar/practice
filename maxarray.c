#include<stdio.h>
int main()
{
    int a[6];
    int i;
    int max;
    printf("Enter the number\n");
    for(i=1;i<6;i++)
       {
        scanf("%d\n",&a[i]);
       }   
          max=a[1];
          for(i=1;i<6;i++)
          {
           if(a[i]>max)
           {
            max=a[i];
           }
          }
    
    printf("the max element is %d\n",max);
    return 0;
}