#include <stdio.h>

typedef struct{
    char nome[50];
    float preco;
    int quantidade;
}Produto;

int main(){

    int n;

    printf("Quantos produtos: ");
    scanf("%d", &n);

    Produto p[n];

    float totalGeral = 0;

    for(int i=0;i<n;i++){

        printf("\nProduto %d\n", i+1);

        printf("Nome: ");
           scanf("%s", p[i].nome);

        printf("Preco: ");
           scanf("%f", &p[i].preco);

        printf("Quantidade: ");
               scanf("%d", &p[i].quantidade);
    }

    int maior = 0;

    printf("\nProduto\tPreco\tQtd\tTotal\n");
    printf("---------------------------------------\n");
    for(int i=0;i<n;i++){

        float total = p[i].preco * p[i].quantidade;

        printf("%s\tR$%.2f\t%d\tR$%.2f\n",
        p[i].nome,
   p[i].preco,
             p[i].quantidade,
           total);

        totalGeral += total;
        if(total > (p[maior].preco * p[maior].quantidade)){
            maior = i;
        }
    } 
    printf("Total geral: R$ %.2f\n", totalGeral);

    printf("Maior estoque: %s (R$ %.2f)\n",
        p[maior].nome,
         p[maior].preco * p[maior].quantidade);

    return 0;
}