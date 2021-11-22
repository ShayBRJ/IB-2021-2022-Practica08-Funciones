  /**
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Parentheses.cc
  * @author Borja Medina alu0101337609@ull.edu.es
  * @date  Nov 18 2022
  * @brief Se ingresará por pantalla una secuencia de caracteres ['(' o ')']. El programa mostrará por salida
  * sin la sintaxis ingresada es correcta o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31111
  */

#include <iostream>

using namespace std;

bool VerificacionParentesis(){
  int cierre_llave = 0;
  char llave;
  while (cin >> llave && cierre_llave >= 0){
    if (llave == '(') {
      cierre_llave = cierre_llave + 1;
    }
    else if (llave == ')') {
     cierre_llave = cierre_llave - 1;
    }
  }
  if(cierre_llave == 0) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  
  bool verificacion = VerificacionParentesis();
  if (verificacion) {
    cout << "yes" << endl; 
  }
  else {
    cout << "no" << endl;
  }
}