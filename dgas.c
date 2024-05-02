#include <stdio.h>
#include <string.h>

int main() {
    char expr[100];
    scanf("%s", expr);
    int len = strlen(expr);
    printf("PTR\tL_PTR\tR_PTR\tLABEL\n");

    if (len == 5) {
        printf("0\t0\t0\t%c\n", expr[1]);
        printf("1\t0\t0\t%c\n", expr[3]);
        printf("2\t0\t1\t%c\n", expr[2]);
    }

    else if (len == 7) {
        printf("0\t0\t0\t%c\n", expr[1]);
        printf("1\t0\t0\t%c\n", expr[3]);
        printf("2\t0\t0\t%c\n", expr[5]);
        printf("3\t1\t2\t%c\n", expr[4]);
    }
     else if (len == 9) {
        printf("0\t0\t0\t%c\n", expr[1]);
        printf("1\t0\t0\t%c\n", expr[3]);
        printf("2\t0\t0\t%c\n", expr[5]);
        printf("3\t0\t0\t%c\n", expr[7]);
        printf("4\t2\t3\t%c\n", expr[6]);
       
    }

    return 0;
}

