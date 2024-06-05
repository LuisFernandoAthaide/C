#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO_VETOR 2

void main () {

    setlocale(LC_ALL,"");

    int vetorA[3], contadorA;

    // Inserindo valores no vetor de forma NÃO iterável.
    vetorA [0] = 5;
    vetorA [1] = 10;
    vetorA [2] = 15;

    // Percorrendo o valores de cada índice do vetor.
    for (contadorA = 0; contadorA <= TAMANHO_VETOR; contadorA++){

        printf("Índice %d = %d", contadorA, vetorA[contadorA]);
        printf("\n");

    }

    // Inserindo valores no vetor de forma iterável.
    
    int vetorB[3], contadorB;
    
    for (contadorB = 0; contadorB <= TAMANHO_VETOR; contadorB ++){
        
        scanf("%d", &vetorB[contadorB]);
        
        printf("Índice %d = %d", contadorB, vetorB[contadorB]);
    }

    /*
        DESAFIO - Crie um algoritmo que leia 3 valores para um vetor de 3 posições e depois calcule a média dos valores acessando o vetor.
    */

}