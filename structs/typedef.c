//
// Created by renato on 29/06/25.
//
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Ponto;

int main() {
    Ponto p = {3, 4};
    printf("x = %d, y = %d\n", p.x, p.y);
}
