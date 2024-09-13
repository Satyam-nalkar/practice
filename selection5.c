#include<stdio.h>
int main()
{
    int n,i,j,min,temp;
    int a[6];
    printf("enter the element");
    for(i=0;i<6;i++)
    {
      scanf("%d",&a[i]);  
    }
    for(i=0;i<6-1;i++)
    {  
        int min=i;
        for(j=i+1;j<6;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
        printf("sorted array\n");
    for(i=0;i<6;i++)
    {
      printf("%d\n",a[i]);
    }
return 0;
}

     

     



