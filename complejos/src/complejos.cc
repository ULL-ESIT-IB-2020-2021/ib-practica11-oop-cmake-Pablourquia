/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file complejos.cc
 * @author Pablo Urquía Adrián alu0101398327@ull.edu.es
 * @date 24 de diciembre de 2020
 * @brief El programa calcula la suma o resta de numeros complejos mediante clases y funciones
 * @bug No hay bugs conocidos
 * 
 */


#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include "complejos.funciones.h"



int main(){
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado{0, 0};
  resultado = add(complejo1, complejo2);
  resultado.print();
  resultado = sub(complejo1, complejo2);
  resultado.print();
}


