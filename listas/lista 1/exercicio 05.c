#include <stdio.h>

struct produto{

char nome[50];
float preco;
int quantidade;

};

  int main() {

     int n,i,maior=0;
float total=0,valor,maiorvalor=0;
     printf("quantos produtos:");
  scanf("%d",&n);

struct produto p[n];
       for(i=0;i<n;i++) {

printf("produto %d\n",i+1);

printf("nome:");
     scanf("%s",p[i].nome);
printf("preco:");
scanf("%f",&p[i].preco);

printf("quantidade:");
scanf("%d",&p[i].quantidade);

       valor=p[i].preco*p[i].quantidade;

total=total+valor;

       if(valor>maiorvalor){
  maiorvalor=valor;
     maior=i;
}

    }
for(i=0;i<n;i++){
printf("%s - %.2f\n",p[i].nome,p[i].preco*p[i].quantidade);

}

         printf("valor total geral: %.2f\n",total);

printf("produto com maior valor em estoque: %s\n",p[maior].nome);

}