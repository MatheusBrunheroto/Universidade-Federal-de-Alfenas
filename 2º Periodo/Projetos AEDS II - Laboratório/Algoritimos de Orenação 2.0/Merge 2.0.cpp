#include <iostream>

int a[10] = {1, 3, 5, 7, 8, 2, 4, 6, 9, 10};
int v[10];

int i, j, k;
int inicio = 0, fim = 10;

int main() {

  int meio = (inicio + fim) / 2;
  i = inicio;
  j = meio;

  while (i < meio && j < fim) {
    if (a[i] <= a[j]) {
      v[k++] = a[i++]; // Essa forma de escrever compara antes do acrescimo
    } else {
      v[k++] = a[j++];
    }
  }
  while (i < meio) {
    v[k++] = a[i++];
  }
  while (j < fim) {
    v[k++] = a[j++];
  }

  for (i = 0; i < 10; i++) {
    std::cout << v[i] << " ";
  }
}

// Agora, vamos unir recursividade com esse conceito, e teremos o famigerado "Merge Sort"