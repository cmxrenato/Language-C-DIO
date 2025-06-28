#include <stdio.h>

int main() {
    char str[] = "ponteiro";
    char *p = str;

    while (*p != '\0') {
        printf("\n%c : %p",*p,(void*)p);

        p++;



    }



    return 0;
}