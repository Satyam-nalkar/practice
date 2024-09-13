#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int sum =0;
    float avg;
    printf("Enter 10 integer:\n");
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
      sum=sum+a[i];
    }
    avg=sum/10;
    printf("The averege is %lf\n",avg);
    return 0;


}