#include <stdio.h>

typedef struct{
char nome[50];
float nota;
}Aluno;

int main(){

int n;

printf("Quantos alunos: ");
      scanf("%d",&n);

Aluno turma[n];

for(int i=0;i<n;i++){

printf("\nAluno %d\n",i+1);

printf("Nome: ");
    scanf("%s",turma[i].nome);

printf("Nota: ");
      scanf("%f",&turma[i].nota);

}

float soma=0;

for(int i=0;i<n;i++){
     soma+=turma[i].nota;
}

float media=soma/n;

int maior=0;
int menor=0;
int acima=0;

for(int i=0;i<n;i++){

if(turma[i].nota>turma[maior].nota)
    maior=i;

if(turma[i].nota<turma[menor].nota)
    menor=i;

if(turma[i].nota>media)
    acima++;

}

printf("\nNome\tNota\n");

for(int i=0;i<n;i++){
printf("%s\t%.1f\n",turma[i].nome,turma[i].nota);
}

printf("\nMedia: %.1f\n",media);
printf("Maior nota: %s %.1f\n",turma[maior].nome,turma[maior].nota);
printf("Menor nota: %s %.1f\n",turma[menor].nome,turma[menor].nota);
printf("Acima da media: %d\n",acima);

return 0;
}