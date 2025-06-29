//
// Created by renato on 29/06/25.
//
#include <stdio.h>

void inverter_sinal(int *x) {
    *x = *x * -1;

}

int main() {

    int x = 7;
    inverter_sinal(&x);
    printf("x = %d\n",x);


    return 0;
}