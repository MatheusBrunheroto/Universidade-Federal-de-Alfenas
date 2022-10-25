#include <iostream>
// O objetivo desse algorítimo é implementar a função merge em 2 vetores
// ordenados

int a[10] = {10, 22, 33, 42, 55, 65, 76, 87, 89, 96};
int b[10] = {5, 15, 21, 25, 31, 36, 45, 53, 57, 67};
int v[20];

int i, j, k;

int main() {
  while (i < 10 && j < 10) {
    if (a[i] <= b[j]) {
      v[k++] = a[i++];
    } else {
      v[k++] = b[j++];
    }
  }
  while (i < 10) {
    v[k++] = a[i++];
  }
  while (j < 10) {
    v[k++] = b[j++];
  }
  
  for (i = 0; i < 20; i++) {
    std::cout << v[i] << " ";
  }
}

// O algorítimo não é volátil para se encaixar em qualquer vetor, porém é só para registrar a ideia do próximo algorítimo, que irá usar apenas um vetor