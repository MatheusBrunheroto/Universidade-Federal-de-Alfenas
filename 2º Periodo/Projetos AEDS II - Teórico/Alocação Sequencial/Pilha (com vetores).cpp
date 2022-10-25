#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int insercao(int *topo, int total, int *vetor, int valor) {
  if (*topo < total - 1) {
    *topo = *topo + 1;
    vetor[*topo] = valor;
    return vetor[*topo];
  } else {
    return -1;
  }
}

int remocao(int *topo, int *vetor) {
  if (*topo >= 0) {
    vetor[*topo] = 0;
    *topo = *topo - 1;
    return vetor[*topo];
  } else {
    return 0;
  }
}

int valor, total, topo;

int main() {

  ifstream entrada;
  entrada.open("entrada.txt");
  entrada >> total;
  int vetor[total];
  // Define o máximo da pilha e o topo desde que N Total = N de Elementos de
  // Entrada
  for (int i = 0; i < total; i++) {
    entrada >> vetor[i];
  }
  
  topo = total - 1;

  int opcao = 0;
  while (opcao != 3) {
    opcao = 0;
        cout << "[";
    for (int i = 0; i < total; i++) {
      if (i == total - 1) {
        cout << vetor[i];
      } else {
        cout << vetor[i] << ", ";
      }
    }
    cout << "]" << endl << endl;
    cout << "[1]- Insercao\n[2]- Remocao\n[3]- Sair\n\nOpcao : ";
    while (opcao != 1 && opcao != 2 && opcao != 3) {
      cin >> opcao;

      switch (opcao) {
      case 1:
        cin >> valor;
        cout << insercao(&topo, total, vetor, valor) << endl << endl;
        cout << "Pressione Enter para continuar...";
        getchar();
        getchar();
        system("clear");
        break;

      case 2:
        cout << remocao(&topo, vetor) << endl << endl;
        cout << "Pressione Enter para continuar...";
        getchar();
        getchar();
        system("clear");
        break;

      case 3:
        cout << endl;
        break;
      }
    }
  }
}
