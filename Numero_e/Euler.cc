/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Euler.cc
  * @author Borja Medina alu0101337609@ull.edu.es
  * @date  Nov 18 2022
  * @brief Este programa pedirá un numero n y devolverá la aproximación del numero de euler mediante el Σi=0 hasta n (1/i). 
  * Dicho resultado será mostrado por pantalla. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P19916
  */

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double Factorial(int numero) {
  if (numero == 0) {
    return 1;
  }
  else if (numero == 1) {
    return 1;
  }
  else {
    return numero * Factorial(numero - 1);
  }
}

double NumeroEuler(int numero_n) {

 double sumatorio = 0;
 for (int i = 0; i < numero_n; i++) {
   sumatorio = sumatorio + 1.0/Factorial(i);
 } 
  return sumatorio;
}

int main() {
  int numero_n;
  while(cin >> numero_n) {
  cin.ignore();
  long double resultado = NumeroEuler(numero_n);
  cout << fixed << setprecision(10) << "With " << numero_n << " term(s) we get " << resultado << "." << endl;
  }
  return 0;


}