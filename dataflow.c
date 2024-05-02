#include<stdio.h>
#include<string.h>
struct Expression
{
    char left[20],right[20];
};
int main()
{
    int i,j,n;
    printf("No of expr :");
    scanf("%d",&n);
    struct Expression expr[n];
    for(i=0;i<n;i++)
    {
        printf("Left :");
        scanf("%s",&expr[i].left);
        printf("Right:");
        scanf("%s",&expr[i].right);
    } 
    printf("Intermediate code\n");
    for(i=0;i<n;i++)
    {
        printf("Line number %d : %s = %s\n",i+1,expr[i].left,expr[i].right);
    }
    printf("\nDAta flo analysis");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(strstr(expr[j].right,expr[i].left))
            {
                printf("\n%s is live at %s",expr[i].left,expr[j].right);
            }
        }
    }
       
}
