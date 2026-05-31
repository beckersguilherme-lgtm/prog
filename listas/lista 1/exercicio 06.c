#include <stdio.h>

struct jogador{

char nome[50];
int pontos;

     };

int main() {

int n,i,maior=0,menor=0;

printf("quantos jogadores:");
        scanf("%d",&n);

struct jogador j[n];

       for(i=0;i<n;i++) {

      printf("jogador %d\n",i+1);

printf("nome:");
          scanf("%s",j[i].nome);
   printf("pontos:");
        scanf("%d",&j[i].pontos);
if(j[i].pontos > j[maior].pontos) {

      maior = i;

            }  

      if(j[i].pontos < j[menor].pontos) {
menor = i;

}

        }

printf("jogador com mais pontos: %s\n",j[maior].nome);
             printf("pontos: %d\n",j[maior].pontos);
printf("jogador com menos pontos: %s\n",j[menor].nome);
              printf("pontos: %d\n",j[menor].pontos);

}