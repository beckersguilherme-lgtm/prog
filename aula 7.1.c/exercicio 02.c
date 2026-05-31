#include <stdio.h>

typedef struct{
char nome[50];
int vitorias;
int empates;
int derrotas;
int pontos;
}Time;

void lerTimes(Time times[],int n);
void calcularPontos(Time times[],int n);
void imprimirClassificacao(Time times[],int n);
int encontrarLider(Time times[],int n);

int main(){

int n;

printf("Quantos times: ");
       scanf("%d",&n);

Time times[n];

lerTimes(times,n);
calcularPontos(times,n);
imprimirClassificacao(times,n);

int lider=encontrarLider(times,n);

printf("\nLider: %s (%d pontos)\n",
times[lider].nome,
times[lider].pontos);

return 0;
}

void lerTimes(Time times[],int n){

      for(int i=0;i<n;i++){

printf("\nTime %d\n",i+1);

printf("Nome: ");
       scanf("%s",times[i].nome);

printf("Vitorias: ");
      scanf("%d",&times[i].vitorias);

printf("Empates: ");
       scanf("%d",&times[i].empates);

printf("Derrotas: ");
      scanf("%d",&times[i].derrotas);

}
}

void calcularPontos(Time times[],int n){

     for(int i=0;i<n;i++){

times[i].pontos=
(times[i].vitorias*3)+
(times[i].empates);

}
}

void imprimirClassificacao(Time times[],int n){

     printf("\nNome\tPts\n");

for(int i=0;i<n;i++){

printf("%s\t%d\n",
times[i].nome,
times[i].pontos);

}
}

 int encontrarLider(Time times[],int n){

    int lider=0;

    for(int i=1;i<n;i++){

if(times[i].pontos>times[lider].pontos)
    lider=i;

}

return lider;
}