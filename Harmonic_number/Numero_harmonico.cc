  /**
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file posicion_num.cc
  * @author Borja Medina alu0101337609@ull.edu.es
  * @date  Nov 18 2022
  * @brief Se ingresa un numero n de iteraciones y se mostrará por salida el numero harmonico con dicho valor. Σ(i=0 hasta n) 1/i.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39225
  */
#include <iostream>
#include <iomanip>
using namespace std;

double NumeroHarmonico(int n) { // n será el número maximo divisible que dividirá al 1.
double sumatorio = 0;
 for ( double i = 1; i <= n; i++)  
 sumatorio = sumatorio + (1/i); 

 return sumatorio;
}


int main () {
    int numero_n;
    cin >> numero_n;
    cout << fixed << setprecision(4) << NumeroHarmonico(numero_n) << endl;
}