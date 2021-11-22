/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file three_words.cc
  * @author Borja Medina alu0101337609@ull.edu.es
  * @date  Nov 18 2022
  * @brief Se insertan 3 cadenas por entrada y se invierte el orden en el que fueron insertadas mostrando este resultado
  * por salida.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P62421
  */
#include <iostream>
#include <string.h>

void ImprimeInverso (const std::string *palabra) {

  std::cout << palabra[2] << " " << palabra[1] << " " << palabra[0];
}

int main (void) {

  std::string total_palabra[3];
  //Inserte un tres palabras a añadir.
  std::cin >> total_palabra[0] >> total_palabra[1] >> total_palabra[2];
  ImprimeInverso(total_palabra);
  std::cout << "\n";
  return 0;
} 