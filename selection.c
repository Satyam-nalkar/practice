#include<stdio.h>
#include<stdlib.h>
void selectionSort(int A[], int n)
{
  int i ,j,minpos,temp;
  for(i=0;i<n-1;i++)
  {
    minpos=i;
  
  for(j=i+1;j<n;j++)
  {
  if(A[j]<A[minpos])
  {
   minpos=j;
  }
  }
  if(minpos!=i)
  {
    temp=A[i];
    A[i]=minpos;
    minpos=temp;
  }
  }
  

}
void printArray(int A[], int n) 
{
    int i;
    for (i = 0; i <n; i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
}
 int main()
 {
  int n,i;
  printf("Enter the number of element");
  svanf("%d",&n)
  int *A=(int *)malloc(n *sizeof(int));
  if(A==NULL)
  {
    printf("memory locatin failed\n");
    return 1; 
  }
  printf("Enter element%d\n",n);
  for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 
 printf("original array\n");
 printArray(A,n);
 selectionSort(A,n);
 printf("Sorted array\n");
 printArray(A,n);
 free(A);
 return 0;
 }

