# include <stdio.h>
# include <stdlib.h>

int *AlocandoMemoriaVetor (TamanhoDoVetor) {

    int *PonteiroVetor;

    /* 
                                    ALOCAÇÃO DINÂMICA NA MEMÓRIA
       malloc -> Aloca um bloco de memória de tamanho especificado em bytes. Não inicializa a memória.
                 É necessário fazer o casting de malloc (int*)
    */
    PonteiroVetor = (int*) malloc(TamanhoDoVetor * sizeof(int));
    printf("Tamanho do espaço em memória reservado é de: %d bytes.", PonteiroVetor);
    printf("\n");

    // Retorna o ponteiro que aponta para a primeira posição de memória do vetor alocado.
    return PonteiroVetor;

}


int main () {

    int TamanhoDoVetor, *vetor, contador;

    // 1° Definir o tamanho do vetor.
    printf("Qual será o tamanho do vetor? ");
    scanf("%d", &TamanhoDoVetor);

    // 2°) Alocar espaço em memória para o vetor.
    vetor = AlocandoMemoriaVetor(TamanhoDoVetor);
    
    // 3°) Adicionar valores aos índices do vetor.
    for (contador = 0; contador < TamanhoDoVetor; contador++)
    {
        printf("Digite um número para atribuir ao índice %d do vetor: ", contador);
        scanf("%d", &vetor[contador]);
    }
    
    // 4°) Imprimindo os valores do vetor.
    for (contador = 0; contador < TamanhoDoVetor; contador++)
    {
        printf("Índice %d: %d", contador, vetor[contador]);
        printf("\n");
    }

    // 5°) Limpar a memória usada pelo vetor. ********OBS.: Utilizar somente após verificar que não irá utilizar o vetor.********
    free(vetor);
    
    return 0;

}