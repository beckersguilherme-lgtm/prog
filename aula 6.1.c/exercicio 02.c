#include <stdio.h>

typedef struct{
char nome[50];
float preco;
int quantidade;
}      Produto;

int main(){

int n;

printf("Quantos produtos: ");
   scanf("%d",&n);

       Produto p[n];

for(int i=0;i<n;i++){

printf("\nProduto %d\n",i+1);

printf("Nome: ");
         scanf("%s",p[i].nome);

printf("Preco: ");
     scanf("%f",&p[i].preco);

printf("Quantidade: ");
        scanf("%d",&p[i].quantidade);

}

int maior=0;
int menorPreco=0;

        float totalGeral=0;

printf("\nProduto\tPreco\tQtd\tTotal\n");
         for(int i=0;i<n;i++){

float total=p[i].preco*p[i].quantidade;

printf("%s\t%.2f\t%d\t%.2f\n",
p[i].nome,
p[i].preco,
p[i].quantidade,
     total);
totalGeral+=total;

if(total>(p[maior].preco*p[maior].quantidade))
        maior=i;
if(p[i].preco<p[menorPreco].preco)
      menorPreco=i;

}
printf("\nMaior estoque: %s\n",p[maior].nome);
printf("Menor preco: %s\n",p[menorPreco].nome);
printf("Total geral: %.2f\n",totalGeral);

return 0;
}