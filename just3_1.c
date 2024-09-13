#include<stdio.h>
int main()
{
    int i, a[5];
    printf("Enter five element:");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d\n",&a[i]);
    }
     printf("you entered\n");
     for ( i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
   return 0;
    
}