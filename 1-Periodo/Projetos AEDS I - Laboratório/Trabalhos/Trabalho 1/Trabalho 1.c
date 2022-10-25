/*------------------------------------------------------
 * Primeiro trabalho AEDs I - Programação
 * Assunto: Comandos de controle de repetição e seleção
 * Prof. Luiz Eduardo da Silva
 * Aluno: Matheus Brunheroto
 *-----------------------------------------------------*/

#include <stdio.h>

int c, d, u, x = 122, y;
int xnorm, xinv, yinv, nmagico; // X implica na normalização de Y
int plus;

int main() {
  do {
    plus++;

    // Verificador, impede que C = D e D = U

    do {
      x++;

      c = x / 100;
      d = (x - (100 * (c))) / 10;
      u = (x - (100 * (c) + 10 * (d)));

    } while (c == d || u == d || c == u || d == 0 || u == 0);

    // Passou do verificador

    // Inversor caso C<U

    if (c > u) {
      xnorm = 100 * c + 10 * d + u; // X normal
    } else {
      xnorm = 100 * u + 10 * d + c; // X normalizado e inverso
    }

    // Passou do inversor

    // Calculos 2.0

    c = xnorm / 100;
    d = (xnorm - (100 * (c))) / 10;
    u = (xnorm - (100 * (c) + 10 * (d)));
    xinv = 100 * u + 10 * d + c;

    y = xnorm - xinv;

    c = y / 100;
    d = (y - (100 * (c))) / 10;
    u = (y - (100 * (c) + 10 * (d)));
    yinv = 100 * u + 10 * d + c;

    nmagico = y + yinv;

    // Impressora em função de plus < 504

    printf("caso %3i: %i-%i=%3i,%4i+%i=%i\n", plus, xnorm, xinv, y, y, yinv,
           nmagico);

  } while (plus != 504);
}