#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c,delta,x1,x2;
int main() {
  
  printf("\nInsira o Valor desejado dos Coeficientes da Equação Ax² + Bx + C = 0\n");
  printf("\n A = ");
  scanf("%f",&a);
  printf("\n B = ");
  scanf("%f",&b);
  printf("\n C = ");
  scanf("%f",&c);

  delta = b*b - 4*a*c;
  
  if(delta<0){
    printf("\nA equação inserida \"%0.1fx² + %0.1fx + %0.1f = 0\" não possui raizes.",a,b,c);
    }
  else{
      if(delta==0){
      x1 = -b/(2*a);
      printf("A única raiz real para a equação é \"%0.1fx² + %0.1fx + %0.1f = 0\" %0.1f",a,b,c,x1);
      }
  else{
      if(delta>0){
       x1 = (-b + sqrt(delta)) / (2*a);
       x2 = (-b - sqrt(delta)) / (2*a);
        printf("\nAs raizes para a equação inserida \"%0.1fx² + %0.1fx + %0.1f = 0\", são : %0.1f e %0.1f",a,b,c,x1,x2);
        }
    } 
  return 0;
}}