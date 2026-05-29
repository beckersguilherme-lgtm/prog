#include <stdio.h> 
#include <string.h>

typedef struct{

    char nome [50];
    float altura;
    int idade;


} pessoa;

int main(){
    
    pessoa p;
    printf("nome:\n");
    scanf(" %s", p.nome);
    
        printf("altura:\n");
    scanf("%f", &p.altura);
    
        printf("idade:\n");
    scanf("%d", &p.idade);
  
    
}