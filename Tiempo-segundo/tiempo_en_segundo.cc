/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file tiempo_en_segundo.cc
  * @author Borja Medina alu0101337609@ull.edu.es
  * @date  Nov 12 2022
  * @brief Por entrada se le pasara un numero de años, dias, horas, minutos y segundos, y el programa
  * realizará una serie de calculos y mostrará por pantalla el tiempo total en segundos.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P70955
  */
#include <iostream>
using namespace std;

inline void MostrarMensaje () {

 cout << "Escribe los numeros a operar: ";
}

int TiempoTotal (int anyos, int dias, int horas, int minutos, int segundos) {

  int total_segundos = segundos;
  total_segundos += (minutos*60) + (horas*3600) + (dias*24*3600) + (anyos*365*24*3600);
  return total_segundos;

}


int main ( void ) {

  int anual, dias, horas, minutos, segundos;
  // MostrarMensaje();
  cin >> anual >> dias >> horas >> minutos >> segundos;
  cout << TiempoTotal(anual, dias, horas, minutos, segundos) << endl;
  
  return 0;
}