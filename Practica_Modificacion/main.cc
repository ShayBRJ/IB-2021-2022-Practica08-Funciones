#include <iostream>

using namespace std;

bool IsPrime(int n) {
  for (int i = 2; i < n; i++ ){
    if( n % i == 0) {
      return false;
    }
  }
  return true;
}

int largest_prime_factor(int n) {
  int resultado = 1;
  for (int i = 2; i <= n; i++ ) {
    if ( n % i == 0 ) {
      if (IsPrime(i)) {
        resultado = i;
      }
    }
  }
  return resultado;
}


int main() {
  int n;
  while (cin >> n) cout << largest_prime_factor(n) << endl;
  return 0;
}
