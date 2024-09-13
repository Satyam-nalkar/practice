#include<stdio.h>
int main()
{ 
    int a[100];
    int i,n,j,temp,min;
    printf("Enter the number of element in the array:");
    scanf("%d",&n);
    printf("Enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                min=j;
            }
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
      printf("Sorted array\n");
      for(i=0;i<n;i++)
       {
        printf("%d",a[i]);
       }

    }   
return 0;


    
}