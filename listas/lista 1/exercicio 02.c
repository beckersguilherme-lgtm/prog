#include <stdio.h> 
#include <string.h>

typedef struct {

    char time1[50];
    char time2[50];
 int gols1;
int gols2;

}placar;

int main(){

   placar p;
   printf("escolha o nome do time 01:\n");
   scanf("%49s", p.time1);

   printf("escolha o nome do time 02:\n");
   scanf("%49s", p.time2);

   
}