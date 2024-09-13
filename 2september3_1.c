#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int n;  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);   
    int a[n];
    int count = 0; 
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }  
    
    for (int i = 0; i < n; i++)
    {
        bool left = false, right = false;
        if (i == 0 || a[i - 1] == 0)
        {
            left = true;
        }     
        if (i == (n - 1) || a[i + 1] == 0)
        {
            right = true;
        }
        
        if (left && right)
        {
            a[i] = 1; 
            count++; 
        }
    } 
    
    printf("Updated array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    if (count >= n)
    {
        printf("Plantation is successful.\n");
        return 0; 
    } 
    else 
    {
        printf("Plantation is not successful.\n");
        return 1; 
    }
      printf("number of n %d",n);
}
