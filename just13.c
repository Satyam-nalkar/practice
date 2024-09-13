#include<stdio.h>
int main()
{
    int row,col;
    int mat[3][3];
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d\t",&mat[row][col]);
        }
    }
       for(row=0;row<3;row++)
       {
         for(col=0;col<3;col++)
        {
            printf("%d\t",mat[row][col]);
        }
       }
}