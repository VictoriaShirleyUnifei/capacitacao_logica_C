/*
    DESAFIO

    Crie um código do 0 que leia um caracter informado pelo usuário e guarde na variável "opcao".
    Em seguida, utilize a estrutura SWITCH para verificar o valor de "opcao" e exibir uma mensagem correspondente:
    - Se "opcao" for A, exiba "Você escolheu Albert Einstein".
    - Se "opcao" for M, exiba "Você escolheu Marie Curie".
    - Se "opcao" for N, exiba "Você escolheu Nikola Tesla".
    - Para qualquer outro valor, exiba "Opção inválida!".

    Obs.: os caracteres devem ser digitados em maiusculo e estar sempre entre aspas simples, como 'A', 'M' ou 'N'.
    (inclusive na estrutura SWITCH)
    Tente digitar o código manualmente, sem copiar e colar. Em caso de dúvida, consulte os exemplos 07 e 17.
*/

#include <stdio.h>

int main() {
    char opcao;

    printf("Digite A, M ou N: \n");
    scanf("%s", &opcao);

    switch(opcao){
        case 'A':
            printf("Você escolheu Albert Einstein");
            break;
        case 'M':
            printf("Você escolheu Marie Curie");
            break;
        case 'N':
            printf("Você escolheu Nikola Tesla");
            break;
        default:
            printf("Opção inválida!");
            break;
    }

    return 0;
}