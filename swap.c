#include <stdio.h>

int main() 
{
    int a, b, k;
    printf("Enter two integers: ");
    scanf("%d%d", &a,&b);
    k=a;
    a=b;
    b=k;
    printf("After swap: a=%d, b=%d\n",a,b);
    return 0;
}
