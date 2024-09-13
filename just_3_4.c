#include<stdio.h>
int main()
{
    char a[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("Enter the character %d:",i+1);
    scanf(" %c",&a[i]);
    }
    printf("The character are:\n");
    for(i=0;i<5;i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}