#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h> //

void main () {

    setlocale(LC_ALL, "");

    // Responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    // Variável que recebe o resto da divisão do número por 3 (aleatório entre 0 e 2)
    int aleatorio = rand() % 3;

    // Imprime o valor
    printf("%d", aleatorio);
    printf("\n");

}