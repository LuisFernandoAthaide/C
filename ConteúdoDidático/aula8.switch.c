#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");    

    int operacao;
    float valorA, valorB;
    
    printf("Digite um número para ser atribuído ao valor A: ");
    scanf("%f", &valorA);
    printf("\n");

    printf("Digite um número para ser atribuído ao valor B: ");
    scanf("%f", &valorB);
    printf("\n");

    printf("Qual tipo de operação matemática deseja realizar?", "\n");
    printf("\n");
    
    printf("1 - Soma");
    printf("\n");
    printf("2 - Subtração");
    printf("\n");
    printf("3 - Multiplicação");
    printf("\n");
    printf("4 - Divisão");
    printf("\n");
    
    scanf("%d", &operacao);


    switch (operacao) {
    case 1:
        printf("%f + %f = %.2f", valorA, valorB, valorA + valorB);
        printf("\n");
        break;
    case 2:
        printf("%f - %f = %.2f", valorA, valorB, valorA - valorB);
        printf("\n");
        break;
    case 3:
        printf("%f x %f = %.2f", valorA, valorB, valorA * valorB);
        printf("\n");
        break;
    case 4:
        printf("%f / %f = %.2f", valorA, valorB, valorA / valorB);
        printf("\n");
        break;
    default:
        printf("OPÇÃO INVÁLIDA.");
        printf("\n");
        break;
    }

    return 0;

}