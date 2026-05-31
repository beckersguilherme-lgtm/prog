#include <stdio.h>

typedef struct{
    char nome[50];
    float nota;
}Aluno;

int main(){

    int n;
    float soma = 0;

    printf("Quantos alunos: ");
         scanf("%d", &n);

    Aluno turma[n];

    for(int i=0;i<n;i++){

        printf("\nAluno %d\n", i+1);

        printf("Nome: ");
             scanf("%s", turma[i].nome);

        printf("Nota: ");
            scanf("%f", &turma[i].nota);

        soma += turma[i].nota;
    }

    int maior = 0;
    int menor = 0;

    for(int i=1;i<n;i++){

        if(turma[i].nota > turma[maior].nota){
            maior = i;
        }
        if(turma[i].nota < turma[menor].nota){
            menor = i;
        }
    }

    printf("\nMaior nota:\n");
    printf("%s - %.1f\n", turma[maior].nome, turma[maior].nota);
    printf("\nMenor nota:\n");
    printf("%s - %.1f\n", turma[menor].nome, turma[menor].nota);

    return 0;
}