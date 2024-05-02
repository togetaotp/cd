#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s%s",&str1,&str2);
    printf("symbol \t address \t tokentype \tdatatype \t size");
    if(strcmp(str1,"int")==0)
    {
        int i=2;
        printf("\n%s\t \t%d\t identifier\t %s\t \t   %d",str2,&str2,str1,i);
    }
    else if(strcmp(str1,"float")==0)
    {
        int i=4;
        printf("\n%s\t \t%d\t identifier\t %s\t \t   %d",str2,&str2,str1,i);
    }
    else if(strcmp(str1,"char")==0)
    {
        int i=1;
        printf("\n%s\t \t%d\t identifier\t %s\t \t   %d",str2,&str2,str1,i);
    }
    return 0;
}
