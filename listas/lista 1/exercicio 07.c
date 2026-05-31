#include <stdio.h>
float somar(float a,float b){
return a+b;

}

float subtrair(float a,float b){
      return a-b;

}

          float multiplicar(float a,float b){

  return a*b;

}

     float dividir(float a,float b){

if(b==0){

         printf("nao e possivel dividir por zero\n");
return 0;

}

              return a/b;

}

     int main(){

float n1,n2;

     printf("primeiro numero:");
scanf("%f",&n1);

        printf("segundo numero:");
   scanf("%f",&n2);
printf("soma: %.2f\n",somar(n1,n2));
     printf("subtracao: %.2f\n",subtrair(n1,n2));
 printf("multiplicacao: %.2f\n",multiplicar(n1,n2));
      printf("divisao: %.2f\n",dividir(n1,n2));

}