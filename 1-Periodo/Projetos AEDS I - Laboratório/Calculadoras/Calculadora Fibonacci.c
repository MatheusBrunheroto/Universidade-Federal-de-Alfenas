#include <stdio.h>
#include <stdlib.h>

int n, atual = 1, ant = 0, prox, i;
int main() {
  printf("Quantos resultados da Cadeia de Fibonacci você deseja ?\nValor : ");
  scanf("%i", &n);

  if (n > 46) {
    while ((getchar()) != '\n') {
    }
    n = 46;
    printf("\nInfelizmente o maior valor que o programa consegue representar é "
           "até o 46, deseja continuar ?\n\nPressione Enter...");
    getchar();

  } else {
    while (n < 0) {
      system("cls");
      printf("Valor digitado é inválido, tente novamente...\nValor:");
      scanf("%i", &n);
    }
  }
  system("cls");
  while (n > 0) {
    i++;
    prox = ant + atual;
    ant = atual;

    if (i >= 10) {
      printf("%i-  %i \n", i, atual);
    } else {
      printf("%i-   %i \n", i, atual);
    }
    
    atual = prox;
    n -= 1;
  }
}