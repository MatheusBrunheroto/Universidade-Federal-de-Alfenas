#include <iostream>

void quicksort(int vetor[], int inicio, int fim) {
  int esq, dir, pivo, aux;

  if (inicio < fim) {

    pivo = inicio;
    esq = inicio;
    dir = fim;

    while (esq < dir) { // Pra quando os valores se "atravessarem"

      // Faz com que todos os menores valores estejam na esquerda do pivo
      while (vetor[esq] <= vetor[pivo] && esq < fim) {
        esq++;
      }

      // Faz com que todos os maiores valores estejam na direita de pivo
      while (vetor[dir] > vetor[pivo] && dir > 0) {
        dir--;
      }

      if (vetor[esq] < vetor[dir]) { //
        aux = vetor[esq];
        vetor[esq] = vetor[dir];
        vetor[dir] = aux;
      }
    }
    // Troca o pivo que estava sendo comparado para sua posicao correta, a
    // partir do momento que esq e dir cruzarem
    aux = vetor[pivo];
    vetor[pivo] = vetor[dir];
    vetor[dir] = aux;

    quicksort(vetor, inicio, dir - 1); // Lado menor até o pivo
    quicksort(vetor, dir + 1, fim);    // Lado > pivo até o fim
    // Note: o pivo sempre é colocado na sua posição correta, por isso ele é
    // ignorado em dir + 1 e dir - 1
  }
}

int vetor[8] = {4, 2, 3, 1, 5, 6, 8, 7};

int main() {
  
  quicksort(vetor, 0, 8);

  for (int i = 0; vetor[i] <= 8; i++) {
    std::cout << vetor[i] << " ";
  }
}