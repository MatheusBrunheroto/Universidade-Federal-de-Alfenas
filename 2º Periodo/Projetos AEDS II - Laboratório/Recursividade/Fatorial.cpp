#include <iostream>
using namespace std;
int inst = 0;

int fatorial(int n) {
  cout << "Instancia " << ++inst << " quando n = " << n << endl;
  if (n < 2)
    return 1;
  else
    return n * fatorial(n - 1);
}

int fatorial2(int n) {
  int fat = 1;
  while (n > 1) {
    fat = fat * n;
    n--;
  }
  return fat;
}
int main() {
  int n, ft;
  cout << "Calculo do Fatorial ..." << endl;
  cout << "Digite o valor de n -> ";
  cin >> n;
  ft = fatorial(n);
  cout << "O fatorial de " << n << " é -> " << ft << endl;
}