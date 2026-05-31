#include <stdio.h>

typedef struct{
    char nome[50];
    float nota;
}Aluno;

int main(){

    int n, acima = 0;
    float soma = 0, media;

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
    media = soma / n;

    printf("\n--- BOLETIM ---\n");

    for(int i=0;i<n;i++){
        printf("%s - %.1f\n", turma[i].nome, turma[i].nota);

        if(turma[i].nota > media){
            acima++;
        }
    }
    printf("\nMedia da turma: %.1f\n", media);
    printf("Alunos acima da media: %d\n", acima);

    return 0;
}