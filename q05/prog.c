/* Crie uma Estrutura disciplina em que um dos campos 
corresponde também a uma estrutura professor. */

#include <stdio.h>

#define TAM 30

struct Professor {
    char nome[TAM];
};

struct Disciplina {
    char nome[TAM];
    int horas;
    struct Professor Prof;
};

int main(void){
    struct Disciplina A;

    puts("\nNome da disciplina: ");
    scanf("%s", A.nome);

    puts("Quantidade de horas: ");
    scanf("%d", &A.horas);

    puts("Nome do professor");
    scanf("%s", A.Prof.nome);

    printf("\nNome da disciplina: %s\n", A.nome);
    printf("Quantidade de horas: %d hrs.\n", A.horas);
    printf("Nome do professor: %s\n\n", A.Prof.nome);

    return 0;
}