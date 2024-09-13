#include<stdio.h>
int main()
{
  int i,j,r,c,sum,max;
  printf("Enter the number of row");
  scanf("%d",&r);
  printf("Enter the number of col");
  scanf("%d",&c);
  int mat[r][c];
  printf("enter the value for matrix\n");
  for ( i = 0; i < r; i++)
  {
    for ( j = 0; j < c; j++)
    {
       printf("Enter the value for matrix %d%d\t",i,j);
       scanf("%d",&mat[i][j]);
    } 
  }
  printf("sum of customer wealth\n");
  int arr[r];
  for ( i = 0; i < r; i++)
  {
    
        sum=0;
       for(j=0;j<c;j++)
       {
       sum=sum+mat[i][j];
       }
       printf("costomer wealth%d:%d\n",i,sum);
       arr[i]=sum;
  } 
     
     int maxindex=0;   
     int f=arr[0];
     
     for(int i=1;i<r;i++)
     {
     if (arr[i]> f) 
      {
         f=arr[i];
         maxindex++;
      }
     }
      printf("The maximum wealth of customer %d : with sum  %d\n",maxindex,f);
        return 0;
}