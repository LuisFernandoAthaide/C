#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define ANO_NASCIMENTO 1997 // Definindo uma constante.

/*
    Tipos de dados em C:
        
        Primitivos
            - int           4bytes
            - char          1byte
            - float         4bytes (06 casas decimais)
            - double        8bytes (15 casas decimais)
        
        Derivado
            - array         
            - struct
            - union
            - enum
            - pointer

    Modificadores em C:
        - short
        - long
        - signed
        - unsigned
*/

void main () {
    
    setlocale(LC_ALL, ""); // Permite usar acentos
    
    printf("Olá mundo!");
    printf("\n");

    int a = 36;
    float b = 1;

    printf("1) soma de %d + %f = %.2f", a, b, a + b); // Definindo a quantidade de casas decimais após o ponto flutuante.
    
    printf("\n");

    scanf("%d %f", &a, &b);
    printf("2) soma de %d + %.3f = %f", a, b, a + b);

    printf("\n");

    char genero = 'm';
    printf("1) Genero: masculino(%c) e feminino()", genero);

    printf("\n");

    fflush(stdin); // Limpa o buffer de memória.
    scanf("%c", &genero);
    printf("2)Genero: masculino() e feminino(%c)", genero);
    printf("\n");


    printf("%d", ANO_NASCIMENTO);
    printf("\n");

}