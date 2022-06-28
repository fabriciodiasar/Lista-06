/* Escreva um programa em C que gere um vetor com números
aleatórios e calcule sua média. Organize uma Estrutura
com as seguintes informações: ponteiro para a matriz,
quantidade de elementos e a média. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

struct Estrutura{
    int *matriz;
    int qtd;
    float media;
};

void preencherVetor(int *, int);
void imprimirMatriz (int *, int, int);
float media (int *, int);

int main(void){
    int lin, col;
    struct Estrutura a;

    puts("\nDigite o número de linhas: ");
    scanf("%d", &lin);

    puts("\nDigite o número de colunas: ");
    scanf("%d", &col);

    a.qtd = lin * col;
    a.matriz = malloc(a.qtd * sizeof(int));

    srand(time(0));
    preencherVetor(a.matriz, a.qtd);

    puts("------ Matriz ------");
    imprimirMatriz(a.matriz, lin, col);

    a.media = media(a.matriz, a.qtd);

    printf("\nMédia = %.2f.\n\n", a.media);
    
    free(a.matriz);

    return 0;
}

void preencherVetor(int *v, int tam){
    for(int i = 0; i < tam; i++)
        *(v + i) = rand() % MX;
}

void imprimirMatriz (int *v, int lin, int col) {
  for(int i = 0; i < lin * col; i++) {
    printf("%d\t", *(v + i));

    if(((i + 1) % col) == 0) printf("\n");
  }
  printf("\n");
}

float media (int *v, int tam){
    int somatorio = 0;
    for(int i = 0; i < tam; i++)
        somatorio += *(v + i);

    return (float) somatorio / tam;
}
