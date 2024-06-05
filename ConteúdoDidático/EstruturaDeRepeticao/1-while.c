#include <stdio.h>
#include <stdlib.h>

void main () {

    int multiplicando = 1, multiplicador = 0, produto;


    while (multiplicando < 11)
    {
        multiplicador ++ ;

        produto = (multiplicando * multiplicador);


        printf("%d x %d = %d", multiplicando, multiplicador, produto);
        printf("\n");

        if (multiplicador == 10) {
            
            multiplicador = 0;
            multiplicando ++;
            printf("\n\n");

        }

    }

}