#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

int AnalisisCadena(string cadena) {
  istringstream toda_palabra(cadena);
  int contador = 0;
  int operando_1 = 0, operando_2 = 0;
    while (!toda_palabra.eof()) {
        contador++;
        string auxiliar;
        toda_palabra >> auxiliar;
        if (strcmp(auxiliar.c_str(), "beginning") == 0) {
          operando_1 = contador;
          while(!toda_palabra.eof()) {
            contador++;
            string auxiliar2;
            toda_palabra >> auxiliar2;
            if (strcmp(auxiliar2.c_str(), "end") == 0) {
              operando_2 = contador;
            }
            
          } 
      }
      else if (strcmp(auxiliar.c_str(), "end") == 0) {
        return -1;
      }
    }
    if(operando_2 - operando_1 - 1 >= 0) {
      return operando_2 - operando_1 - 1;
    }
  return -1;
}


int main (void) {
  string cadena;
  getline(cin, cadena);
  int numero_ = AnalisisCadena(cadena);
  if(numero_ < 0) {
    cout << "wrong sequence" << endl;
  }
  else {
      cout<<numero_<<endl;
  }
  return 0;
}