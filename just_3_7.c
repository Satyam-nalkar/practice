#include<stdio.h>
int main()
{
     int a[5],k ,i=0; 
        printf("Enter 10 integer:\n");
        for(int j=0;j<10;j++)
        {
        scanf("%d",&a[i]);
        i = (i+1) % 5;
        }
        printf("the integer are:\n");
        for(int k=0;k<5;k++);
        {
            printf("%d\n",a[k]);
        }


     return 0;

 
}