#include <stdio.h>

typedef struct{
char nome[50];
float preco;
int quantidade;
float totalEstoque;
}Produto;

void lerProdutos(Produto est[],int n);
void calcularEstoque(Produto est[],int n);
void imprimirEstoque(Produto est[],int n);
int encontrarMaiorEstoque(Produto est[],int n);
int encontrarMenorPreco(Produto est[],int n);

int main(){

int n;

printf("Quantos produtos: ");
      scanf("%d",&n);

Produto est[n];

lerProdutos(est,n);
calcularEstoque(est,n);
imprimirEstoque(est,n);

int maior=encontrarMaiorEstoque(est,n);
int menor=encontrarMenorPreco(est,n);

printf("\nMaior estoque: %s\n",est[maior].nome);
printf("Menor preco: %s\n",est[menor].nome);

return 0;
}

void lerProdutos(Produto est[],int n){

for(int i=0;i<n;i++){

printf("\nProduto %d\n",i+1);

printf("Nome: ");
     scanf("%s",est[i].nome);

printf("Preco: ");
         scanf("%f",&est[i].preco);

printf("Quantidade: ");
       scanf("%d",&est[i].quantidade);

}
}

void calcularEstoque(Produto est[],int n){

     for(int i=0;i<n;i++){

est[i].totalEstoque=est[i].preco*est[i].quantidade;

}
}

void imprimirEstoque(Produto est[],int n){

       float total=0;

printf("\nNome\tPreco\tQtd\tTotal\n");

    for(int i=0;i<n;i++){

printf("%s\t%.2f\t%d\t%.2f\n",
est[i].nome,
est[i].preco,
est[i].quantidade,
est[i].totalEstoque);

total+=est[i].totalEstoque;

}

printf("\nTotal geral: %.2f\n",total);

}

int encontrarMaiorEstoque(Produto est[],int n){

int maior=0;

       for(int i=1;i<n;i++){

if(est[i].totalEstoque>est[maior].totalEstoque)
     maior=i;

}

return maior;
}

int encontrarMenorPreco(Produto est[],int n){

int menor=0;

for(int i=1;i<n;i++){

if(est[i].preco<est[menor].preco)
    menor=i;

}

return menor;
}