#include <iostream>

// Vídeo Explicando Merge Sort, feito por mim : https://youtu.be/h6GvQPufoc0

int vetor[8] = {4, 5, 3, 6, 2, 7, 1, 8};
// int v[8];
int inicio, meio, fim;

void intercala(int inicio, int meio, int fim, int vetor[]) {
int * v = (int *)malloc((fim-inicio) * sizeof (int));   

  int i = inicio, j = meio;
  int k = 0;

  while (i < meio && j < fim) {
    if (vetor[i] <= vetor[j]) {
      v[k++] = vetor[i++];
    } else {
      v[k++] = vetor[j++];
    }
  }

  while (i < meio) {
    v[k++] = vetor[i++];
  }
  while (j < fim) {
    v[k++] = vetor[j++];
  }

// perguntar importancia disso
  for (i = inicio; i < fim; ++i) {
    vetor[i] = v[i - inicio];
   }
}

void MergeSort(int inicio, int fim, int vetor[]) {
  if (inicio < fim - 1) {
    int meio = (inicio + fim) / 2;
    MergeSort(inicio, meio, vetor);
    MergeSort(meio, fim, vetor);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    intercala(inicio, meio, fim, vetor);
  }
}

void imprime(int vetor[], int fim) {
  int i;
  for (i = 0; i < fim; i++)
    printf("%d ", vetor[i]);
  printf("\n");
}

int main() {

  inicio = 0;
  for (int i = 0; vetor[i] != '\0'; i++) {
    fim = i;
  }

  MergeSort(inicio, fim, vetor);
  imprime(vetor, fim);
}