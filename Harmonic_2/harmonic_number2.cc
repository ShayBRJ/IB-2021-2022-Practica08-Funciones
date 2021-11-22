/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_number2.cc
  * @author Borja Medina alu0101337609@ull.edu.es
  * @date  Nov 18 2022
  * @brief Este programa pedirá dos enteros y proximamente mostrará por salida el valor absoluto de la diferencia de ambos numeros harmonicos.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58153
  */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double NumeroHarmonicoRes(int n1, int n2) { // n será el número maximo divisible que dividirá al 1.
  double sumatorio = 0;
  double operador1 = n1;
  double operador2 = n2;
  operador2++;
  while (operador2 <= operador1) {
    sumatorio += 1 / operador2;
    operador2++;
  }
  return sumatorio;
}


int main () {
  int numero_n1, numero_n2;
  while(cin >> numero_n1 >> numero_n2) {
   cout << fixed << setprecision(10) << NumeroHarmonicoRes(numero_n1, numero_n2) <<endl;
  }
}