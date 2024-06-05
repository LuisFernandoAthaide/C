# include <stdio.h>
# include <stdlib.h>
# define TAMANHO_DO_VETOR 1

void main () {


    int matriz[TAMANHO_DO_VETOR + 1][TAMANHO_DO_VETOR + 1], coluna, linha;

    for (coluna = 0; coluna <= TAMANHO_DO_VETOR ;coluna ++) {

        printf("\n coluna %d: \n", coluna);
        
        for (linha = 0; linha <= TAMANHO_DO_VETOR; linha ++) {

            printf("coluna%d, linha %d = ", coluna, linha);
            scanf("%d", &matriz[coluna][linha]);

        }

    }

    // Acessando os dados da matriz
    for (coluna = 0; coluna <= TAMANHO_DO_VETOR ;coluna ++) {
        
        printf("\n");

        for (linha = 0; linha <= TAMANHO_DO_VETOR; linha ++) {

            printf("%d ", matriz[coluna][linha]);

        }

    }

    printf("\n\n");

    /*
        DESAFIO - Preencher uma matriz 2x2 lendo valores do usuário e depois troque valores entre a primeira e a segunda linha.
    */

}