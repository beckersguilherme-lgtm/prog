#include <stdio.h>

void imprimirMenu(){

printf("\n=== CALCULADORA ===\n");
printf("1. Calcular media de 3 notas\n");
printf("2. Verificar se numero e primo\n");
printf("3. Calcular potencia\n");
printf("0. Sair\n");
printf("Opcao: ");

}

float calcularMedia(float a,float b,float c){

return (a+b+c)/3;

}

int ehPrimo(int n){

if(n<2)
return 0;

for(int i=2;i<n;i++){

if(n%i==0)
     return 0;

}

return 1;

}

int potencia(int base,int exp){

int resultado=1;

for(int i=0;i<exp;i++){
resultado*=base;
}

return resultado;

}

int main(){

int opcao;

while(1){

imprimirMenu();
     scanf("%d",&opcao);

switch(opcao){

case 1:{

float n1,n2,n3;

printf("Nota 1: ");
     scanf("%f",&n1);

printf("Nota 2: ");
      scanf("%f",&n2);

printf("Nota 3: ");
      scanf("%f",&n3);

printf("Media: %.2f\n",
calcularMedia(n1,n2,n3));

break;
}

case 2:{

int num;

printf("Numero: ");
    scanf("%d",&num);

if(ehPrimo(num))
printf("Numero primo\n");
else
    printf("Numero nao primo\n");

break;
}

case 3:{

int base,exp;

printf("Base: ");
        scanf("%d",&base);

printf("Expoente: ");
      scanf("%d",&exp);

printf("Resultado: %d\n",
      potencia(base,exp));

break;
}

case 0:

printf("Programa encerrado.\n");
      return 0;

default:

printf("Opcao invalida.\n");

       }
}
return 0;
}