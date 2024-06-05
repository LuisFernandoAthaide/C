#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Ponteiro -> Armazena um endereço de memória.

    Variável -> Armazena valor em um endereço da memmória.
*/

void main () {

    setlocale(LC_ALL,"");

    int ano_atual;

    ano_atual = 2024;
    
    // Valor atribuído a variável ano_de_nascimento.
    printf("Valor da variável ano_atual: %d", ano_atual);
    printf("\n");

    // Endereço de memória ocupado pela variável ano_de_nascimento.
    printf("Endereço de memória da variável ano_atual: %d", &ano_atual);
    printf("\n");

    // Criando um ponteiro, e atribuindo-o um endereço de memória da variável ano_atual.
    int *ponteiro = &ano_atual;

    printf("%d", *ponteiro);
    printf("\n");
    printf("Endereço de memória do ponteiro: %d", &ponteiro);
    printf("\n");

    // Alterando valor do ponteiro.
    *ponteiro = 1997;

}