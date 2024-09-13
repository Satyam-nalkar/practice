#include<stdio.h>
int main()
{
  int a;
  printf("Enter the score");
  scanf("%d",&a);
  if(a>=90)
    {
     printf("Grade A%d\n",a);
    }
    else if(a>=80 && a<=89)
    {
     printf("Grade B%d\n",a);
    }
    else if(a>=70 && a<=79)
    {
    printf("Grade C%d\n",a); 
    }
    else if(a>=60 && a<=69)
    {
        printf("Grade D%d\n",a);
    }
    else
    {
        printf("less Grade than grade D\n");
    }
    return 0;

}