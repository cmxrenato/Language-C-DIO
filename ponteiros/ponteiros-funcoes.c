//
// Created by renato on 29/06/25.
//
#include <stdio.h>

void dobrar(int *x) {

    *x = *x * 2;


}


int main() {

    int x = 10;
    dobrar(&x);
    printf("x = %d\n",x);


    return 0;



}