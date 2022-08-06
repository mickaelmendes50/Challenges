#include <stdio.h>
#define MAX 4000000

int main(int argc, char const *argv[]) {
    int x0 = 0, x1 = 1, soma = 0, aux;

    while (x1 <= MAX) {        
        aux = x1;
        x1 += x0;
        x0 = aux;
        
        // se for par, ele soma
        if ((x1%2) == 0) {
            soma += x1;
        }
    }

    printf("%d\n", soma);
    return 0;
}
