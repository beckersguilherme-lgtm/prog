#include <stdio.h> 
#include <string.h>

typedef struct {
int gols1;
int gols2;

}placar; 

int main(){ 
    
    placar p;
    
printf("quantos gols o time 01 fez:\n");
 scanf("%d", &p.gols1);

  printf("quantos gols o time 02 fez:\n");
 scanf("%d", &p.gols2);
 
 printf ("placar: %d x %d\n", p.gols1, p.gols2);

  if(p.gols1 >p.gols2){
      
 printf("time01 venceu"); 
  }
  
else if(p.gols1 < p.gols2){
 printf("time02 venceu");
 }
 
 else{
     printf("enpate");
 }

}
