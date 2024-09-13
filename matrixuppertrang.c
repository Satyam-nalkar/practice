#include<stdio.h>
int main()
{
    int i,j,n,r,c;
    printf("Enter the number of row");
    scanf("%d",&r);
    printf("Enter the number of col");
    scanf("%d",&c);
    int mat[r][c];
    printf("Enter the value for matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the value for matrix: %d%d\t",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
   printf("upper trangular addition:");
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
         {
          int sum =0;
         
          if(i<j)
          {
            sum+=mat[i][j];
            printf("Sum of upper trangular %d:\n",sum);
          }
          printf("\n");
         }
    }
     return 0;
    
}