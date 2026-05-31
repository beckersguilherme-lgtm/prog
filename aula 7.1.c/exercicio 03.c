#include <stdio.h>

typedef struct{

char nome[50];
float media;

}Aluno;

void ordenarPorMedia(Aluno turma[], int n){

    for(int i=0;i<n-1;i++){

        int iMaior=i;

        for(int j=i+1;j<n;j++){

            if(turma[j].media > turma[iMaior].media){
                iMaior=j;
            }
        }

        Aluno temp=turma[i];
        turma[i]=turma[iMaior];
        turma[iMaior]=temp;
    }
}

int main(){

    int n;

    printf("Quantos alunos: ");
          scanf("%d",&n);

    Aluno turma[n];

    for(int i=0;i<n;i++){

        printf("\nAluno %d\n",i+1);

        printf("Nome: ");
             scanf("%s",turma[i].nome);

        printf("Media: ");
               scanf("%f",&turma[i].media);
    }

          ordenarPorMedia(turma,n);

    printf("\n=== RANKING ===\n");

        for(int i=0;i<n;i++){

        printf("%d - %s - %.1f\n",
        i+1,
        turma[i].nome,
        turma[i].media);
    }

    return 0;
}