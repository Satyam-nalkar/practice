#include<stdio.h>
int main()
{
    int enteredPassword;
    const int correctPassword =1234;
    do
    {
     printf("Enter the Password:");
     scanf("%d",&enteredPassword);
     if(enteredPassword!=correctPassword)
     {
        printf("Incorrect password.Try again.\n");
     }
    } while (enteredPassword!=correctPassword);
    printf("Password accepted.\n");
    return 0;
}