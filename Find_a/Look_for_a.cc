#include <iostream>
#include <string.h>
using namespace std;

bool LetraEncontrada(const string & cadena) {
    for ( int i = 0; i < cadena.size(); i++) {
        if (cadena.at(i) == 'a') {
            return true;
        }
    }
    return false;
}

int main() {
  
  string cadena;
  getline(cin, cadena, '.');
  if(LetraEncontrada(cadena)) {
    cout << "yes" << endl;
  }
  else
    cout << "no" << endl;

  return 0;
}