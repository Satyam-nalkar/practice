#include<stdio.h>
int main()
{
    int a[5];
    int sum = 0;
    for(int i=0;i<5;i++)
    {
    printf("Enter the the element %d:",i+1);
    scanf("%d",&a[i]);
    sum +=a[i];
    }
    printf("the sum is:%d\n",sum);
    return 0;
}