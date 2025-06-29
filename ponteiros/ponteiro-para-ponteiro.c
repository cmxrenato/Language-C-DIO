//
// Created by renato on 29/06/25.
//
#include <stdio.h>
int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;


    printf("x = %d\n", x);         // 10
    printf("*p = %d\n", *p);       // 10
    printf("**pp = %d\n", **pp);   // 10


    return 0;



}