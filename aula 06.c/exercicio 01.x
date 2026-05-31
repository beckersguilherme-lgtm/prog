#include <stdio.h>

typedef struct{
    char nome[50];
    float preco;
    int quantidade;
}Produto;

int main(){

    Produto p;
       float total;

    printf("Nome: ");
         scanf("%s", p.nome);

    printf("Preco: ");
          scanf("%f", &p.preco);

    printf("Quantidade: ");
         scanf("%d", &p.quantidade);

    total = p.preco * p.quantidade;

    printf("\nNome: %s\n", p.nome);
    printf("Preco: R$ %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.quantidade);
    printf("----------------------------\n");
    printf("Valor total em estoque: R$ %.2f\n", total);

    return 0;
}