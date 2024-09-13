#include<stdio.h>
#include<math.h>
int main()
{
    int j,n,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(n>0)
        {
            j=n%10;
            n=n/10;
            sum=sum+(j*j);

        }
        n=sum;
    }
    if(sum==1)
    printf("Happy Number\n");
    else
    printf("UnHappy Number\n");
}