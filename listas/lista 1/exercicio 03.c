#include <stdio.h>
struct produto{
    char nome[50];
    float preco;
    int quantidade;

};

int main() {

    struct produto p;
    float valortotal, valordesconto;

     printf("nome do produto: ");
    scanf("%s", p.nome);

    printf("preço do produto:");
     scanf("%f", &p.preco);

 printf("quantidade de estoque:");
     scanf("%d", &p.quantidade);

     valortotal = p.preco * p.quantidade;
     valordesconto = valortotal * 0.90;

     printf("\nProduto: %s\n", p.nome);
    printf("Valor total em estoque: R$ %.2f\n", valortotal);
printf("Valor com 10%% de desconto: R$ %.2f\n", valordesconto);

}