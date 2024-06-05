#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL,"");

        // 1°) Definir a quantidade de caracteres.  
        char string [255];

        // 2°) Limpar o buffer de memória.
        setbuf(stdin, 0);

        printf("Digite o uma palavra qualquer para ser atribuída a variável string: ");
        // 3°) Lê o valor da string.
        fgets(string, 255, stdin); 

        /*
        4°) Ajustando/Limitando a quantidade de caracteres da string de acordo com o quantidade de caracteres do valor atribuído a string.
        
            Tendo em vista que string foi definida com um total de 255 caracteres, haverá casos em que a string terá menos que 255 caracteres, sendo necessário ajustar
            o total de caracteres da string de acordo com o total de caracteres da palavra passada, para que não haja consumo de memória desnecessário.

                exemplo: Paralelepípedo -> 14 caracteres 

                         string = "Paralelepípedo";  [P][a][r][a][l][e][l][e][p][í][p][e][d][o]["\0"]["\0"]["\0"]["\0"]["\0"]["\0"]["\0"]["\0"]...["\0"]
                                                      1  2  3  4  5  6  7  8  9 10 11 12  13 14  15    16    17    18    19    20    21    22       255
        */
        string[strlen(string)-1] = "\0";

        printf("A palavra %s, possui %d caracteres", string, strlen(string));
        printf("\n");

}