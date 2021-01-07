/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file racional.funciones.cc
 * @author Pablo Urquía Adrián alu0101398327@ull.edu.es
 * @date 28 de diciembre de 2020
 * @brief El programa opera con numeros racional usando clases
 * @bug No hay bugs conocidos
 * 
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <vector>
#include <stdio.h>
#include <sstream>
#include <algorithm>
#include "racional.funciones.h"

Racional add (Racional racional1, Racional racional2){
  int new_denominator = racional1.getDenominator() * racional2.getDenominator();
  int new_numerator = ((new_donominator/racional1.getDenominator()) * racional1.getNumerator()) + ((new_donominator/racional2.getDenominator()) * racional2.getNumerator());
  Racional new_racional (new_numerator, new_denominator);
  return new_racional;

}

Racional subtract (Racional racional1, Racional racional2){
  int new_denominator = racional1.getDenominator() * racional2.getDenominator();
  int new_numerator = ((new_donominator/racional1.getDenominator()) * racional1.getNumerator()) - ((new_donominator/racional2.getDenominator()) * racional2.getNumerator());
  Racional new_racional (new_numerator, new_denominator);
  return new_racional;

}

Racional multiplication (Racional racional1, Racional racional2){
  int new_numerator = racional1.getNumerator() * racional2.getNumerator();
  int new_denominator = racional1.getDenominator() * racional2.getDenominator();
  Racional new_racional (new_numerator, new_denominator);
  return new_racional;
}

Racional division (Racional racional1, Racional racional2){
  int new_numerator = racional1.getNumerator() * racional2.getDenominator();
  int new_denominator = racional1.getDenominator() * racional2.getNumerator();
  Racional new_racional (new_numerator, new_donominator);
  return new_racional;
}

Racional comparation (Racional racional1, Racional racional2){
  float racional1_new = racional1.getNumerator() / racional2.getDenominator();
  float racional2_new = racional2.getNumerator() / racional2.getDenominator();
  if(racional1_new < racional2_new){
    std::cout << racional1.getNumerator() << '/' << racional1.getDenominator() << " es menor que " 
    << racional2.getNumerator() << '/' << racional2.getDenominator() << std::endl;
  }
  else if (racional1_new > racional2_new){
    std::cout << racional1.getNumerator() << '/' << racional1.getDenominator() << " es mayor que " 
    << racional2.getNumerator() << '/' << racional2.getDenominator() << std::endl;
  }
  else{
    std::cout << "Son iguales" << std::endl;
  }
}