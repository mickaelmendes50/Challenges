#include <stdio.h>

int main(int argc, char const *argv[]) {
    int max = 1000, soma = 0;
    for (int i = 0; i < max; i++) {
        if (((i%3) == 0) || ((i%5) == 0)) {
            soma += i;
        }
    }
    printf("%d\n", soma);

    return 0;
}
