  /**
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file posicion_num.cc
  * @author Borja Medina alu0101337609@ull.edu.es
  * @date  Nov 18 2022
  * @brief El usuario ingresara en primer lugar una posicion (en numero entero) y luego deberá ingresar una secuencia de numeros.
  * El programa mostrará por salida el numero que se encuentre en esa posicion.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39225
  */
#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

int PosicionNumero(int numero_com, const string &kcadena_numeros) {

  istringstream salida_cadena(kcadena_numeros);
  int posicion = 1; 
  while (!salida_cadena.eof()) {
      int numero_comprobar;
      salida_cadena >> numero_comprobar;
      if (numero_com == posicion) {
          return numero_comprobar;
      }
      posicion++;
  }
  return 0;
}

int main() {
  int numero_com;
  string cadena_num;
  cin >> numero_com;
  cin.ignore();
  getline(cin, cadena_num); 
  cout << "At the position " << numero_com << " there is a(n) " << PosicionNumero(numero_com, cadena_num) <<"." << endl;
  return 0;

}