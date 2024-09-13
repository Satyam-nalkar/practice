#include<stdio.h>
int main()
{
    int a,b,k;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
   k=a;
   a=b;
   b=k;
   printf("after swapping:a=%d,b=%d",a,b);
   return 0; 


}