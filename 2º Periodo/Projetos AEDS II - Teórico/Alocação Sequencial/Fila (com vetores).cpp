// prov quer verificar se R irá sobrescrever F
#include <iostream>

using namespace std;

int f = 0, r = 0, M, valor;
int total = 0;

int insercao(int *r, int *f, int M, int valor, int *vetor) {
  if (total < M) {
    vetor[*r] = valor;
    *r = *r + 1;
    total = total + 1;
    if (*r == M) {
      *r = 0;
      return -1;
    } else {
      return vetor[*r - 1];
    }
  } else {
    return -2;
  }
}

int remocao(int *f, int *r, int M, int *vetor) {
  if (total > 0) {
    vetor[*f] = 0;
    *f = *f + 1;
    total = total - 1;
    if (*f == M) {
      *f = 0;
      return -1;
    } else {
      return vetor[*f];
    }
  } else {
    return -2;
  }
}

int main() {

  cout << "Insira a quantidade de elementos que deseja inserir -> ";
  cin >> M;
  int vetor[M];

  for (int i = 0; i < M; i++) {
    vetor[i] = 0;
  }
  system("clear");

  int opcao = 0;
  while (opcao != 3) {
    opcao = 0;
    cout << "[";
    for (int i = 0; i < M; i++) {
      if (i == M - 1) {
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
        cout << insercao(&r, &f, M, valor, vetor) << endl << endl;
        cout << "Pressione Enter para continuar...";
        getchar();
        getchar();
        system("clear");
        break;
      case 2:
        cout << remocao(&f, &r, M, vetor) << endl << endl;
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