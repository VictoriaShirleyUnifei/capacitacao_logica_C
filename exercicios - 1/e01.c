/*
    Completando o exemplo de código abaixo, 
    crie um programa com:
    - uma variável de tipo int
    - uma variável de tipo float
    - uma variável de tipo char

    E atribua valores a elas.
    Use sua criatividade para nomear as variáveis,
    considerando quais tipos de dados são adequados.
*/
#include <stdio.h>

int main() {
    // Declare as variáveis abaixo:
    char inicialNome = 'V';
    int idade = 23;
    float saldo = 5.99;

    printf("Dados do usuario: \n");
    printf("Inicial do nome: %c\n", inicialNome);
    printf("Idade: %d\n", idade);
    printf("Saldo: %.2f\n", saldo);

    return 0;
}