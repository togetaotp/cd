#include <stdio.h>
#include <string.h>
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s",input);
    if(input[0]=='/'&&input[1]=='/')
    {
        printf("SINGLE COMMENT");
    }
    else if (input[0]=='/'&&input[1]=='*')
    {
        printf("MULTI COMMENT");
    }
    else
    {
        printf("NOT A COMMENT");
    }
    return 0;
}
