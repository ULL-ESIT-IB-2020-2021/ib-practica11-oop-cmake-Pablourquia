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
  float racional1_new = racional1.getNumerator() / racional1.getDenominator();
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

Racional media_total (Racional racional1, Racional racional2){
  float racional1_new = racional1.getNumerator() / racional1.getDenominator();
  float racional2_new = racional2.getNumerator() / racional2.getDenominator();
  float media = (racional1_new + racional2_new) / 2;
  return media;
}

Racional media_numerator (Racional racional1, Racional racional2){
    float racional_numerator = (racional1.getNumerator() + racional2.getNumerator()) / 2;
    return racional_numerator;
}

Racional media_denominator (Racional racional1, Racional racional2){
    float racional_denominator = (racional1.getDenominator() + racional2.getDenominator()) / 2;
    return racional_denominator;
}