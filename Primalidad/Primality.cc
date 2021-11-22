  /**
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Primality.cc
  * @author Borja Medina alu0101337609@ull.edu.es
  * @date  Nov 18 2022
  * @brief Se ingresará una secuencias de numero y se determinarán por salida si son primos o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48713
  */

#include <iostream>
#include <math.h>

using namespace std;

bool IsPrime(int numero_prime) {
 int raiz_numero = sqrt(numero_prime);
 bool bandera = true;
 if (numero_prime == 1 || numero_prime == 0) {
     return bandera;
 }
 for( int i = 2; i <= raiz_numero; i++) {
    if(numero_prime % i == 0) {
        return bandera;
    }
 }
 return !bandera;
}

int main() {
  int numeros_evaluar;
  cin >> numeros_evaluar; // Se insertan los numeros a evaluar.
  int todos_los_numeros[numeros_evaluar];
  for ( int i = 0; i < numeros_evaluar; i++) {
    cin >> todos_los_numeros[i];
    }
  for ( int i= 0; i < numeros_evaluar; i++) {
    if(!IsPrime(todos_los_numeros[i])) {
      cout << todos_los_numeros[i] << " is prime"<<endl;
    }
    else { 
       cout <<todos_los_numeros[i] << " is not prime"<<endl;   
    }
    
}
}