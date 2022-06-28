/* Escreva um programa em C que utilize uma Estrutura aluno
para conter duas notas, lidas do usuário, e sua média. */

#include <stdio.h>

struct Aluno {
    int nota[2];
    float media;
};

int main(void) {
    struct Aluno Aln;

    for(int i = 0; i < 2; i++){
        printf("\nDigite a %do. nota: ", i + 1);
        scanf("%d", &Aln.nota[i]);
    }

    Aln.media = (float) (Aln.nota[0] + Aln.nota[1]) / 2;

    for(int i = 0; i < 2; i++){
        printf("\nNota %d = %d.", i + 1, Aln.nota[i]);
    }

    printf("\nMédia do aluno: %.2f.\n", Aln.media);
    
    return 0;
}