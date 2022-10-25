#include <stdio.h>
#include <stdlib.h>

int n, fatorial = 1, o;
int main() {
  printf("Escreva um valor que será submetido ao cálculo de seu "
         "fatorial.\nValor: ");
  scanf("%i", &n);

  while (n < 0) {
    system("cls");
    if (n < 0) {
      printf("O valor digitado é inválido, Tente Novamente.\nValor: ");
    } else {
      printf("O valor máximo aceito é 31, Tente Novamente...\nValor: ");
    }
    scanf("%i", &n);
  }

  o = n; // Iguala o valor para a entrada ser armazenada.

  if (n == 0) {
    printf("\nO resultado de %i! é : %i", o, fatorial);
  } else {
    while (n > 1) {
      fatorial *= n;
      n -= 1;
    }
    printf("\nO resultado de %i! é : %i", o, fatorial);
  }
}
