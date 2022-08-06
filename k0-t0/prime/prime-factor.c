#include <stdio.h>
#define MAX 600851475143

int main(int argc, char const *argv[]) {
    
    for (long int i = 1; i <= MAX; i++) {
        int primo = 0;

        // verifica se o termo i é um divisor de MAX
        if ((MAX%i) == 0) {
            
            // verfica se o divisor é um número primo
            for(long int n = 1; n <= i; n++){
                if(i % n == 0)
                    primo++;
            }

            if(primo == 2)
                printf("%d\n", i);  
        }
    }
    
    return 0;
}
