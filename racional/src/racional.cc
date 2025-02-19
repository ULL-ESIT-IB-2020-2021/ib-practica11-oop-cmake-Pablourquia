/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file racional.cc
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






int main (int argc, char* argv[]){

  std::string inputfile = (argv[1]);
  std::string outputfile = (argv[2]);
  Racional racional1 ();
  racional1.separateNumbers(inputfile);

}

