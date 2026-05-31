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
printf("Nao e possivel dividir por zero.\n");
       return 0;
}

return a/b;
}

int main(){

float n1,n2;

printf("Primeiro numero: ");
    scanf("%f",&n1);

   printf("Segundo numero: ");
         scanf("%f",&n2);

printf("Soma: %.2f\n",somar(n1,n2));
printf("Subtracao: %.2f\n",subtrair(n1,n2));
printf("Multiplicacao: %.2f\n",multiplicar(n1,n2));
printf("Divisao: %.2f\n",dividir(n1,n2));

return 0;
}