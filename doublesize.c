#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("Enter the size of array: ");
scanf("%d", &n);
int *A = (int*) malloc(n*sizeof(int));
for(int i=0; i<n; i++)
{
A[i]=i+1;
}
int *B = (int*) realloc(A, 2*n*sizeof(int));
printf("Prev. block address= %d, New address= %d \n", A, B);
for(int i=0; i<2*n; i++)
{
printf("%d \n", B[i]);
}
}
