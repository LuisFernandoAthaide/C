#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para limpar o buffer de entrada.
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main () {

    setlocale(LC_ALL,"");    

    int operacao;
    float valorA, valorB, resultado;

    // IMPORTANTE: validar os valores passados para as variáveis.
    printf("Digite um número para ser atribuído ao valor A: ");
    scanf("%f", &valorA);

    printf("Digite um número para ser atribuído ao valor B: ");
    scanf("%f", &valorB);
    printf("\n");
    
    // Menu de operações matemáticas.
    do
    {
        printf("Menu de operações:");
        printf("\n");
        printf("1 - Soma");
        printf("\n");
        printf("2 - Subtração");
        printf("\n");
        printf("3 - Multiplicação");
        printf("\n");
        printf("4 - Divisão");
        printf("\n");
        
        printf("Qual tipo de operação matemática deseja realizar? ");
        scanf("%d", &operacao);
        
        // Verificador do valor passado pelo usuário.
        if ((operacao < 1) || (operacao > 4)){

            printf("OPÇÃO INVÁLIDA. Por favor, selecione uma opção válida.");
            printf("\n\n");
            limparBufferEntrada();

        }

    } while ((operacao < 1) || (operacao > 4));

    // Realizando as operações matemáticas.
    switch (operacao) {
    case 1:
        resultado = valorA + valorB;
        printf("%.2f + %.2f = %.2f", valorA, valorB, resultado);
        printf("\n");
        break;
    case 2:
        resultado = valorA - valorB;
        printf("%.2f - %.2f = %.2f", valorA, valorB, resultado);
        printf("\n");
        break;
    case 3:
        resultado = valorA * valorB;
        printf("%.2f x %.2f = %.2f", valorA, valorB, resultado);
        printf("\n");
        break;
    case 4:
        if (valorB != 0){
            resultado = valorA / valorB;
            printf("%.2f / %.2f = %.2f", valorA, valorB, resultado);
            printf("\n");
        } else {
            printf("ERRO: Divisão por zero não é permitida.");
            printf("\n");
        }
        break;
    }

    /*
        Deseja:
        1) Continuar a mesma operação ?
        2) Encerrar operação atual e começar uma nova ?
        3) Encerrar o programa ? 
    */

    // Fim do programa.
    printf("FIM DO PROGRAMA.");
    printf("\n\n");
    
    return 0;

}