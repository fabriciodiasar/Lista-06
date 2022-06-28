/* Escreva um programa em C que utilize uma Estrutura estoque que
contém uma string com o nomePeca, um número inteiro para identificar
o número da peça, o preço em ponto flutuante e um elemento inteiro
para identificar o número do pedido. */

#include <stdio.h>

#define TAM 30

struct Estoque {
    char nome[TAM];
    int numero;
    float preco;
    int pedido;
};

int main(void) {
    struct Estoque p1;

    puts("\nNome da peça: ");
    scanf("%s", p1.nome);

    puts("\nNúmero da peça: ");
    scanf("%d", &p1.numero);

    puts("\nPreço da peça: ");
    scanf("%f", &p1.preco);

    puts("\nNúmero do pedido: ");
    scanf("%d", &p1.pedido);

    puts("\n--------- PEDIDO ---------");
    printf("\nNome da peça: %s", p1.nome);
    printf("\nNúmero da peça: %d", p1.numero);
    printf("\nPreço da peça: %.2f", p1.preco);
    printf("\nNúmero do pedido: %d\n\n", p1.pedido);

    return 0;
}