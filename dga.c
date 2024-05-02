#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX_LIMIT 25

struct da {
    int ptr, left, right;
    char label;
} dag[25];

int main() {
    char input1[MAX_LIMIT];
    int n = 0, i = 0, x, j, l;
    char store, input[25], var;

    for (i = 0; i < 25; i++) {
        dag[i].ptr = dag[i].left = dag[i].right = 0;
        dag[i].label = 0;
    }

    printf("\n\nENTER THE EXPRESSION\n\n");
    fgets(input1, MAX_LIMIT, stdin);

    for (i = 0; i < 25; i++) 
        input[i] = '\0';

    l = strlen(input1);

    a:
    for (i = 0; input1[i] != ')'; i++);
    for (j = i; input1[j] != '('; j--);
    
    for (x = j + 1; x < i; x++)
        if (isalpha(input1[x]))
            input[n++] = input1[x];
        else if (input1[x] != '0')
            store = input1[x];

    input[n++] = store;

    for (x = j; x <= i; x++)
        input1[x] = '0';

    if (input1[0] != '0')
        goto a;

    for (i = 0; i < n; i++) {
        dag[i].label = input[i];
        dag[i].ptr = i;
        
        if (!isalpha(input[i]) && !isdigit(input[i])) {
            dag[i].right = i - 1;
            int ptr = i;
            var = input[i - 1];
            
            if (isalpha(var))
                ptr -= 2;
            else {
                ptr = i - 1;
                while (!isalpha(var) && !isdigit(var)) {
                    ptr = dag[ptr].left;
                    var = input[ptr];
                }
                ptr--;
            }
            dag[i].left = ptr;
        }
    }

    printf("\n DAG FOR GIVEN EXPRESSION\n\n");
    printf("\n\n PTR \t LEFT PTR \t RIGHT PTR \t LABEL \n\n");

    for (i = 0; i < n; i++)
        printf("\n %d \t\t%d\t\t%d\t\t%c\n", dag[i].ptr, dag[i].left, dag[i].right, dag[i].label);

    return 0;
}

