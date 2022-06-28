/* Escreva um programa em C que modifique a Questão 1
para conter um array com 3 alunos. Escreva uma função
para calcular a média dos alunos. */

#include <stdio.h>

#define TAM 3
#define N_TAM 2

struct Aluno {
    int nota[2];
    float media;
};

float media(int *, int);

int main(void) {
    struct Aluno Aln[TAM];

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < N_TAM; j++){
            printf("Digite a %do. nota do %do. aluno: ", j + 1, i + 1);
            scanf("%d", &Aln[i].nota[j]);
        }

        puts("");
    }

    for(int i = 0; i < TAM; i++)
        Aln[i].media = media(Aln[i].nota, N_TAM);

    puts("------ Médias ------");
    for(int i = 0; i < TAM; i++)
      printf("\nMédia do aluno %d = %.2f.", i + 1, Aln[i].media);

    puts("");
    
    return 0;
}

float media (int *v, int tam) {
    int somatorio = 0;
    for(int i = 0; i < tam; i++)
        somatorio += *(v + i);

    return (float) somatorio / tam;
}