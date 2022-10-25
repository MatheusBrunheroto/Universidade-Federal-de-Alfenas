#include <stdio.h>
#include <stdlib.h>

int cond, n1, x, y, valor;
char linha_divisoria[25]= "-----------------------";
int main(){
  
  printf("\nInsira um valor a ser analisado :  ");
  scanf("%i",&n1);
  printf("\n\nValor Inserido deve ser maior que : ");
  scanf("%i",&x);
  printf("\n\nValor inserido deve ser menor que : ");
  scanf("%i",&y);
  printf("\n\t  %s\n\nCondição && (\"e\"), ou || (\"ou\") ? \n",linha_divisoria);
  printf("\n[1] - &&\n[2] - ||\n\nValor :  ");
  scanf("%i",&valor);
  printf("\n\t  %s\n\n",linha_divisoria);

  if(valor == 1){
    cond = (n1>x&&n1<y);
    printf("\n%i, ",cond);
    if(cond==1){
    printf("portanto a condição \"e\" é verdadeira, pois o valor %i > %i, e %i < %i.",n1,x,n1,y);
  } else{
      if(cond==0){
      printf("portanto a condição \"e\" é falsa, pois o valor %i < %i, ou %i > %i. ",n1,x,n1,y);
   }
  }
 }
  
   if(valor == 2){
    cond = (n1>x||n1<y);
    printf("\n%i, ",cond);
    if(cond==1){
    printf("Portanto a condição \"ou\" é verdadeira, pois o valor %i > %i, ou %i < %i.",n1,x,n1,y);
  } else{
      if(cond==0){
      printf("Portanto a condição \"ou\" é falsa, pois o valor %i < %i, e %i > %i.",n1,x,n1,y);
   }
  }
 }
else{if(valor>2||valor<0){
     printf("O valor inserido é invalido.");}}   
}