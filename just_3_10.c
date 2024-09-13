#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str),stdin);
    printf("%s\n",str);
}