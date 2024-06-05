#include <stdio.h>
#include <stdlib.h>


/*
    Crie um algoritmo que imprima ou números pares de 10 a 20 (usando while, do while ou for)
*/

void main () {

    int i;

    for (i=10; i<=20; i++) {

        if ((i % 2) == 0) {
            printf("O número %d é par.", i);
            printf("\n");
        } else {
            printf("O número %d é ímpar.", i);
            printf("\n");
        }

    }

}