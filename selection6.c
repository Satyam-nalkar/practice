#include<stdio.h>
int main()
{
    int a[100];
    int i,n,j,min,temp;
    printf("Enter number of element in array\n");
    scanf("%d",&n);
    printf("Enter the element\n");
     for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     } 
    for(i=0;i<n-1;i++)
    {
        int min =i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }   
    printf("sorted array");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
