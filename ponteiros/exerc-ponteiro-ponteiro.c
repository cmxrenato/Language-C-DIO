//
// Created by renato on 29/06/25.
//
#include <stdio.h>

int main() {

    int num = 5;
    int *p = &num;
    int **pp = &p;

    printf("num = %d\n", num);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);

    printf("\n");
    **pp  = 20;

    printf("num = %d\n", num);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);


    return 0;
}