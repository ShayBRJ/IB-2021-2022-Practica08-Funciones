#include <iostream>
#include <math.h>
using namespace std;
void EscribeDivisores (const int raiz_numero_ingresar, int iterador, int numero_ingresar) {
    
    if(iterador <= raiz_numero_ingresar) {
        if(numero_ingresar % iterador == 0) {
            std::cout << " " << iterador;

            
        }
        EscribeDivisores(raiz_numero_ingresar, iterador + 1, numero_ingresar);
        if (numero_ingresar % iterador == 0 && numero_ingresar/iterador != raiz_numero_ingresar) {
        std::cout << " " << numero_ingresar / iterador;
    }
    }
}

int main ( void ) {
  
  int numero_ingresar;
  while ( std::cin >> numero_ingresar) {
    std::cout << "divisors of " << numero_ingresar << ":";
    EscribeDivisores(sqrt(numero_ingresar), 1, numero_ingresar);
    cout << endl;
  }
  
  return 0;
}