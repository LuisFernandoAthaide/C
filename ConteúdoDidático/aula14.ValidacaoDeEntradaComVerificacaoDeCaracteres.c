#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int is_integer(const char *str) {
    
    if (*str == '-' || *str == '+') {
        
        // Pular sinal opcional
        str++;

    }

    if (!*str) {

        // String vazia após sinal
        return 0;

    }

    while (*str) {

        if (!isdigit(*str)) {
        
            return 0; // Encontrou um caractere não numérico
        
        }

        str++;
    
    }

    return 1;
}

int main() {

    char input[256];
    int num;

    printf("Digite um número inteiro: ");

    /*
        fgets -> Lê o valor da string
            sizeof -> Ele é usado para determinar quanto espaço em memória um tipo de dado ou uma variável ocupa em bytes.
                      Ao usar o "sizeof" com ponteiros, ele retorna o tamanho do ponteiro, não o tamanho do bloco de memória apontado pelo ponteiro.
    */
    while (fgets(input, sizeof(input), stdin)) {

        // Remover nova linha se estiver presente
        input[strcspn(input, "\n")] = '\0';
        
        if (is_integer(input)) {

            num = atoi(input);
            break;
        
        } else {

            printf("Entrada inválida. Digite um número inteiro: ");
        
        }
    }

    printf("Você digitou o número: %d\n", num);

    return 0;
}