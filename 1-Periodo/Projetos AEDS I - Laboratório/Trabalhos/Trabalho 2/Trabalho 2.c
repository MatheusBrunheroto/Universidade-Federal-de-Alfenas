/*------------------------------------------------------
 * Segundo trabalho AEDs I - Programação
 * Assunto: Matrizes em linguagem C
 * Prof. Luiz Eduardo da Silva
 * Aluno: <Matheus Brunheroto>
 *-----------------------------------------------------*/

#include <stdio.h>

float vendas[20][40];
int vx, px;
int v, p;
int i = 1, j = 1;
float valor = 1, total;

int main(void) {

  while (px == 0 || vx == 0) {
    scanf("%i%i", &px, &vx);
    v = vx;
    p = px;
  }

  while (i != 0 || j != 0 || valor != 0) { // Leitor de valores

    scanf("%i", &i);
    scanf("%i", &j);
    scanf("%f", &valor);

    if (i <= vx && j <= px) { // Limita o valor escaneado ao inserido inicialmente
      vendas[i][j] = valor;
    } else {
      printf("\nValor Inválido\n\n");
    }
  }

  // Ciclo Tabela

  printf("\nTabela de Vendas (p = produto, v = vendedor)\n    ");

  for (vx = 0; vx != v; vx++) {
    printf("        v%i", vx + 1);
  }

  printf("\n    +");

  for (vx = 0; vx != v; vx++) {
    printf("----------");
  }

  printf("+\n");

  // Total em função de PX

  while (p != 0) {
    for (j = 1; j <= px; j++) {
      printf(" p%i |", px - p + 1);

      for (i = 1; i <= vx; i++) {
        printf("%10.2f", vendas[i][j]);
        total += vendas[i][j];
      }
      printf("|%10.2f\n", total);
      total = 0;
      p--;
    }
  }

  printf("    +");

  for (vx = 0; vx != v; vx++) {
    printf("----------");
  }

  printf("+\n     ");

  // Total em função de VX

  while (v != 0) {
    for (i = 1; i <= vx; i++) {
      for (j = 1; j <= px; j++) {
        total += vendas[i][j];
      }
      printf("%10.2f", total);
      total = 0;
      v--;
    }
  }
}