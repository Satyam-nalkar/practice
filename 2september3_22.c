#include <stdio.h>
int main() {
    int i, j, r, c;
    int a[3][3], b[3][3]; 
    printf("Enter the number of rows:");
    scanf("%d",&r);
     printf("Enter the number of columns:");
     scanf("%d",&c);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            if (a[i][j] == 0)
            {
                b[i][j] = 0;
            } 
            else
            {
                b[i][j] = 1;
            }
        }
    }
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++)
        {
            int temp = a[i][j];
            if (temp == 0) 
            {
                a[i][j] = 1;
            }
             else
            {
                a[i][j] = 0;
            }
        }
    }
    printf("Array b:\n");
    for (i = 0; i < r; i++)
   {
        for (j = 0; j < c; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Inverted array a:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
