#include <iostream>
using namespace std;

int somatorio(int n){
  if(n > 0){
   return n + somatorio(n - 1); 
  }
  return 0;
}

int n;

int main() {
  cout << "Escreva um numero para passar pelo somatorio -> ";
  cin >> n;
  cout << somatorio(n);

}