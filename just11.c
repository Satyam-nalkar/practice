#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    long double d;
    printf("Enter a number:,a,b,c,d");
    scanf("%d\n %f\n %lf\n %LF",&a,&b,&c,&d);
    printf("int%d\n",a);
    printf("float%f\n",b);
    printf("double%lf\n",c);
    printf("long double%LF\n",d);
    

}