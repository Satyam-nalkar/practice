#include<stdio.h>
int main()
 {
  int A,B,C;
  printf("Enter three number:");
  scanf("%d\n%d\n%d",&A,&B,&C);  
  if(A>=B && A>=C)
  {
    printf("The largest number is:%d\n",A);
  } else if(B>=A && B>=C)
    {
        printf("the largest number is:%d\n",B);
    }
      else
     {
      printf("The largest number is:%d\n",C);
     }  
     return 0;
 }