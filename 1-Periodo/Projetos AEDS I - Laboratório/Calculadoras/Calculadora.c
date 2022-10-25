#include <stdio.h>
#include <stdlib.h>

int n1,n2,n3;
char r[15] = "Resultado = ";
int main(){
  printf("\nDigite um Número : ");
  scanf("%i",&n1);
  printf("Digite outro Número : ");
  scanf("%i",&n2);
  printf("\nQue operação deseja realizar ? Digite de 1 a 4 sendo que :");

  if(1==1)
  {
  printf("\n\n--------------------");
  printf("\n|%-18s|","1 - Soma");
  printf("\n|%-18s|","2 - Subtracao");
  printf("\n|%-18s|","3 - Multiplicacao");
  printf("\n|%-18s|","4 - Divisao");
  printf("\n--------------------\n\nOpção : ");}
  
  scanf("%i",&n3); 

  float soma=n1+n2;
  float sub1=n1-n2;
  float sub2=n2-n1;
  float mult=n1*n2;
  float div=n1/n2;
  
  if(n3==1)                      // Soma
  {
    printf("%s%0.1f ",r,soma);} 
  if(n3==2)                     // Subtração
  {
    if(n2>n1){
      printf("%s%0.1f ",r,sub2);}
    else{
      printf("%s%0.1f ",r,sub1);}
  }
  if(n3==3)                     // Multiplicação
  {
    printf("%s%0.1f ",r,mult);} 
  if(n3==4)                     // Divisão
  {
    printf("%s%0.2f ",r,div);
    puts("\n\nObs: Os resultados são arredondados para caber em uma casa decimal.");}
  if(n3>4)                     // Valor Incongruente
  {
    printf("\nA opção digitada é invalida.");}                    
}