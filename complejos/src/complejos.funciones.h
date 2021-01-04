/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file complejos.funciones.h
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
#ifndef complejos.funciones.h
#define complejos.funciones.h

class Complejo{
 private:
  int real_, imaginaria_;
 public:
  Complejo (int number1, int number2){
    real_ = number1;
    imaginaria_ = number2;
  }
  void setReal (int input){
    real_ = input;
  }
  void setImaginaria (int input){
    imaginaria_ = input;
  }
  int getReal(){
    return real_ ;
  }
  int getImaginaria(){
    return imaginaria_ ;
  } 
  int print(){
    std::cout << real_ << ", " << imaginaria_ << std::endl;
  }

};

Complejo add(Complejo complejo1, Complejo complejo2);
Complejo sub (Complejo complejo1, Complejo complejo2);

#endif