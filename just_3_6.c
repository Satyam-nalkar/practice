#include<stdio.h>
int main()
{
    int a[5];
    int sum = 0;
    for( int i=0;i<5;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("the sum is: %d\n",sum); 
    if(sum>50)
    {
      printf("It is divide by 2 :%d\n",sum/2);  
    }
    else
    {
        printf("it is divide by 3 :%d\n",sum/3);
    }
    return 0;
}