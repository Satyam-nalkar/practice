#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    printf("You entered: %s",str);
    return 0;
}
