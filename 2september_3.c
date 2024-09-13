#include<stdio.h>
int main()
{
   int a[10];
   int i,max,min;
   printf("Enter 10 element:\n");
   for(i=0;i<10;i++)
   {
   scanf("%d",&a[i]);
   }
      min=a[0];
   for(i=0;i<10;i++)
      {
       if(a[i]<min)
          {
           min=a[i];
          }         
          max =a[0];
       if(a[i]>max)
            {
             max=a[i];
            }
      }
        printf("the max is:%d\n",max);
        printf("the min is:%d\n",min);
        return 0;
}
