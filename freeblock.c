#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i;
printf("Size of Array : ");
scanf("%d",&n);
int *myArray = (int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
    myArray[i]=i+1;
}
printf("\n");
for(i=0;i<n;i++)
{
    printf("%d\t",myArray[i]);
}
free(myArray);
printf("\n\nFree the block of Memory is done");
}
