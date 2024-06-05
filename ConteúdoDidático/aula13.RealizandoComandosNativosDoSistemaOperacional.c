#include <stdio.h>
#include <stdlib.h>

// A função system realiza comandos do Sistema Operacional.
void LimparTela () {

    system("ls -l");

}

void main () {

    printf("Olá mundo!");
    printf("\n");

    if (strlen("inconstitucionalicimamente") < 10)
    {
        printf("A palavra possui %d caracteres.", strlen("inconstitucionalicimamente"));
    } else {

        LimparTela();
        printf("Apagou!");

    }

}