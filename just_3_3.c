#include<stdio.h>
int main()
{
    float a[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("enter float number%d\n",i+1);
    scanf("%f",&a[i]);
    }
    printf("the floats are");
    for(i=0;i<5;i++)
    {
    printf("%f\t",a[i]);
    }
}