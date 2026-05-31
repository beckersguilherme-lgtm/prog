#include <stdio.h>

int potencia(int base,int exp){

int resultado=1;

for(int i=0;i<exp;i++){
   resultado*=base;
}

     return resultado;

}

int fatorial(int n){

int fat=1;

for(int i=1;i<=n;i++){
   fat*=i;
}

return fat;

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
int main(){

int numero;

    printf("Digite um numero: ");
scanf("%d",&numero);

printf("Potencia ao quadrado: %d\n",potencia(numero,2));
       printf("Fatorial: %d\n",fatorial(numero));

if(ehPrimo(numero))
printf("Numero primo\n");
    else
printf("Numero nao primo\n");

return 0;
}