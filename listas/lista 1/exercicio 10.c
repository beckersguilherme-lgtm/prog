#include <stdio.h>

struct aluno{

char nome[50];
float nota1,nota2,nota3,media;

};

    struct aluno calcularMedia(struct aluno a){
    a.media=(a.nota1+a.nota2+a.nota3)/3;
     return a;

}

     char definirConceito(float media){

 if(media>=9){
     return 'A';

}

else if(media>=7){
     return 'B';

}

else if(media>=5){
     return 'C';

}

else{
     return 'D';

}

}

void ordenarPorNota(struct aluno a[],int n){

int i,j,maior;
      struct aluno temp;

for(i=0;i<n;i++){

maior=i;

for(j=i+1;j<n;j++){

if(a[j].media>a[maior].media){

maior=j;

}

    }

temp=a[i];
a[i]=a[maior];
a[maior]=temp;

      }

}

void imprimirAluno(struct aluno a){

       printf("%s %.2f %c\n",a.nome,a.media,definirConceito(a.media));

 }

int main(){

        int n,i;

printf("quantos alunos:");
      scanf("%d",&n);

 struct aluno a[n];

for(i=0;i<n;i++){

printf("aluno %d\n",i+1);

printf("nome:");
    scanf("%s",a[i].nome);

printf("nota 1:");
       scanf("%f",&a[i].nota1);

printf("nota 2:");
      scanf("%f",&a[i].nota2);

printf("nota 3:");
       scanf("%f",&a[i].nota3);

a[i]=calcularMedia(a[i]);

}

ordenarPorNota(a,n);

printf("\nboletim\n");
       for(i=0;i<n;i++){
     imprimirAluno(a[i]);

     }

}