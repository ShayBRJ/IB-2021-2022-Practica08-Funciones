  /**
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file first_even.cc
  * @author Borja Medina alu0101337609@ull.edu.es
  * @date  Nov 18 2022
  * @brief El usuario ingresará una secuencia de numeros y se mostrará por salida el primer numero par de esa secuencia.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89078
  */
#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

int PrimerPar(const string &kcadena_numeros) {
  int numero_par = 1;
  istringstream salida_cadena(kcadena_numeros);
  while (!salida_cadena.eof()) {
      int numero_comprobar;
      salida_cadena >> numero_comprobar;
      if (numero_comprobar % 2 == 0) {
          return numero_par;
      }
      numero_par++;
  }
  return 0;
}


int main () {
  
  string cadena_numeros;
  getline(cin, cadena_numeros);
  cout << PrimerPar(cadena_numeros) << endl;

  return 0;
}