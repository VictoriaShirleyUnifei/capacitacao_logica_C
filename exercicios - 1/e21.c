/*
    Complete o código para que imprima os 10 primeiros números pares usando um loop.
*/

#include <stdio.h>

int main() {
    int i;

    printf("Os 10 primeiros números pares são:\n");
    
    // Implemente a lógica:
    for(i = 1; i <= 10; i++) {
        printf("%d\n", i * 2);
    }

    return 0;
}