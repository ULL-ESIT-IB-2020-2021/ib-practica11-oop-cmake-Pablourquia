/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file complejos.funciones.cc
 * @author Pablo Urquía Adrián alu0101398327@ull.edu.es
 * @date 26 de diciembre de 2020
 * @brief El programa calcula la suma o resta de numeros complejos mediantes clases y funciones
 * @bug No hay bugs conocidos
 * 
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include "complejos.funciones.h"

Complejo add(Complejo complejo1, Complejo complejo2){
  Complejo result {0, 0};
  result.setReal(complejo1.getReal() + complejo2.getReal());
  result.setImaginaria(complejo1.getImaginaria() + complejo2.getImaginaria());
  return result;
}

Complejo sub (Complejo complejo1, Complejo complejo2){
  Complejo result {0, 0};
  result.setReal(complejo1.getReal() - complejo2.getReal());
  result.setImaginaria(complejo1.getImaginaria() - complejo2.getImaginaria());
  return result;
}