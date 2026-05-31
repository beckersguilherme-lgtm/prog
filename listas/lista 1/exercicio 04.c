#include <stdio.h>

struct aluno {

    char nome[50];
    float nota;

};

int main() {

    int n, i, aprovado = 0;
    float soma = 0, media;

 printf("quantos alunos:");
 scanf("%d", &n);
 
 struct aluno turma[n];

 for(i = 0; i < n; i++) {
printf("aluno %d\n", i + 1);

printf("nome:");
scanf("%s", turma[i].nome);

printf("nota:");
scanf("%f", &turma[i].nota);

soma += turma[i].nota;

if(turma[i].nota >= 7) {
aprovado++;

}
 }
  
 media = soma / n;

for(i = 0; i < n; i++) {
        printf("%s - %.2f\n", turma[i].nome, turma[i].nota);
        
}
 printf("\nMedia da turma: %.2f\n", media);
    printf("Quantidade de aprovado: %d\n", aprovado);

    return 0;
}