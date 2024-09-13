#include<stdio.h>
int main()
{
int a[5];
int n, i,j,minpos,temp;
printf("Enter five integer");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
    minpos=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[minpos])
        {
            minpos=j;
        }
    }
    temp=a[minpos];
    a[minpos]=a[i];
    a[i]=temp;
 }
   printf("sorted array\n");
   for(i=0;i<5;i++)
   {
    printf("%d\n",a[i]);
   }
return 0;


}