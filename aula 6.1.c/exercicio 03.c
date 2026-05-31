#include <stdio.h>

typedef struct{
char nome[50];
int pontos;
int vitorias;
}Jogador;

int main(){

int n;

printf("Quantos jogadores: ");
    scanf("%d",&n);

Jogador j[n];

for(int i=0;i<n;i++){

printf("\nJogador %d\n",i+1);

printf("Nome: ");
         scanf("%s",j[i].nome);

printf("Pontos: ");
      scanf("%d",&j[i].pontos);

printf("Vitorias: ");
       scanf("%d",&j[i].vitorias);

}

int maisPontos=0;
      int maisVitorias=0;

float soma=0;

      for(int i=0;i<n;i++){

soma+=j[i].vitorias;

if(j[i].pontos>j[maisPontos].pontos)
      maisPontos=i;

if(j[i].vitorias>j[maisVitorias].vitorias)
     maisVitorias=i;

}

float media=soma/n;

      int acima=0;

for(int i=0;i<n;i++){

if(j[i].vitorias>media)
      acima++;

}

printf("\nNome\tPontos\tVitorias\n");

      for(int i=0;i<n;i++){

printf("%s\t%d\t%d\n",
j[i].nome,
j[i].pontos,
j[i].vitorias);

}
printf("\nMais pontos: %s\n",j[maisPontos].nome);
printf("Mais vitorias: %s\n",j[maisVitorias].nome);
printf("Acima da media de vitorias: %d\n",acima);

return 0;
}