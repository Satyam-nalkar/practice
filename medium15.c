#include<stdio.h>
int main()
{
    int n;
    do
    {
       printf("Enter the number:");
       scanf("%d",&n);
    } while (n<100);
   printf("you entered greater than 100:");
}