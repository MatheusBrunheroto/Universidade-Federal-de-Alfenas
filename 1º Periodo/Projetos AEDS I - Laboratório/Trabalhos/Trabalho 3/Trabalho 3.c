#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

FILE *arq;
int i, j, k;
bool cond;

typedef struct {
  char nome[30];
  int celular;
  char twitter[20];
} registro;

void ordena(registro agenda[], int count) {

  for (i = 0; i < count; i++) { // "Bubble Sort" de ASCII
    for (j = 0, k = 0; j < count - 1; j++) {
      for (cond = false; cond == false;) { // Caso haja letras iguais

        if (agenda[j].nome[k] > agenda[j + 1].nome[k]) {

          agenda[count + 1] = agenda[j];
          agenda[j] = agenda[j + 1];
          agenda[j + 1] = agenda[count + 1];

          cond = true;

        } else if (agenda[j].nome[k] < agenda[j + 1].nome[k]) {

          cond = true;

        } else {
          k++; // Avança uma letra no nome inteiro
        }
      }
    }
  }
}

int a, categoria = 0, count = 0;

int main(void) {

  arq = fopen("agenda.csv", "r");

  registro agenda[100];
  char aux[100], conversao[4];

  // Enquanto ainda tiver leitura, adiciona o número de repetições que fez em
  // count++, o loop interno encontra \n :  Sobe um vetor em agenda[a],
  // categoria = 0, j = 0

  for (a = 0; feof(arq) == 0; a++, count++, categoria = 0, j = 0) {

    fgets(aux, 100, arq);

    for (i = 0; aux[i] != '\n'; i++) { // Le a linha até a quebra \n
      if (aux[i] == ';') {
        j = 0;
        categoria++;

      } else {

        if (categoria == 0) { // Nome
          agenda[a].nome[j] = aux[i];
          j++;

        } else if (categoria == 1) { // Celular
          conversao[j] = aux[i];
          j++;
          agenda[a].celular = atoi(conversao);

        } else if (categoria == 2) { // Twitter
          agenda[a].twitter[j] = aux[i];
          j++;

        } else {
        }
      }
    }
  }
  fclose(arq);
  ordena(agenda, count);

  arq = fopen("arquivo-ord.csv", "w");

  for (i = 0; i < count; i++) { // Escrita
    fprintf(arq, "%s;%i;%s\n", agenda[i].nome, agenda[i].celular,
            agenda[i].twitter);
  }
  fclose(arq);
}