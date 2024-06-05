# include <stdio.h>
# include <stdlib.h>
# include <fstream>

/*
    <stdio.h>
        1) fopen
            fopen -> Abre um arquivo especificado pelo nome e modo. E retorna um ponteiro para o arquivo.
                        -Modos comuns:  r(leitura)
                                        w(escrita)
                                        a(anexar)
                                        rb(leitura binária)
                                        wb(escrita binária)
                                        ab(anexar binário)
                sintaxe: FILE *fopen(const char *filename, const char *mode);

        2) fclose
            fclose -> Fecha o arquivo aberto e libera recursos.
                sintaxe: int fclose(FILE *stream);
        
        3) fread, fwrite
            fread -> Lê dados de um arquivo em um buffer.
                sintaxe: size_t fread(void *ptr, size_t size, size_t count, FILE *stream);
            fwrite -> Escreve dados do buffer para o arquivo.
                sintaxe: size_t fwrite(const void *ptr, size_t size, size_t count, FILE *stream);

        4) fgetc, fputc
            fgetc -> Lê um caractere de um arquivo.
                sintaxe: int fgetc(FILE *stream);
            fputc -> Escreve um caractere em um arquivo.
                sintaxe: int fputc(int character, FILE *stream);
        
        5) fgets, fputs
            fgets -> Lê uma string de um arquivo até um newline ou EOF(End_Of_File).
                sintaxe: char *fgets(char *str, int n, FILE *stream);
            fputs -> Escreve uma string em um arquivo.
                sintaxe: int fputs(const char *str, FILE *stream);
        
        6) fprintf, fscanf
            fprintf -> Escreve uma string formatada em um arquivo.
                sintaxe: int fprintf(FILE *stream, const char *format, ...);
            fscanf -> Lê uma string formatada de um arquivo.
                sintaxe: int fscanf(FILE *stream, const char *format, ...);
        
        7) fseek, ftell, rewind
            fseek -> Move o ponteiro do arquivo.
                sintaxe: int fseek(FILE *stream, long int offset, int whence);
            ftell -> Retorna a posição atual do ponteiro do arquivo.
                sintaxe: long int ftell(FILE *stream);
            rewind -> Move o ponteiro do arquivo para o início do arquivo.
                sintaxe: void rewind(FILE *stream);

*/

void main () {



}