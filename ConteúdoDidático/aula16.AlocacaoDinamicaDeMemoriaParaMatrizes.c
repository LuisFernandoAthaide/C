# include <stdio.h>
# include <stdlib.h>

int main () {

    int vetor[0][0], linha, coluna, i, j;

    // Definindo a quantidade de linhas.
    printf("Digite a quantidade de LINHAS que o vetor terá: ");
    scanf("%d", &linha);

    // Definindo a quantidade de coluna.
    printf("Digite a quantidade de COLUNAS que o vetor terá: ");
    scanf("%d", &coluna);

    
    // Adicionando valores aos índices.
    for (i = 0; i < linha; i++) {

        printf("\n");
        printf("Linha %d:", i);
        printf("\n");


        for (j = 0; j < coluna; j++) {

            printf("Linha %d , Coluna %d = ", i, j);
            scanf("%d", &vetor[linha][coluna]);

        }

    }

    // Acessando os valores dos índices da matriz
    for (i = 0; i < linha; i++) { 

        for (j = 0; j < coluna; j++) {

            printf("%d ", vetor[linha][coluna]);

        }

        printf("\n");

    }

    return 0;

}