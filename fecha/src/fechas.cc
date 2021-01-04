/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file fechas.cc
 * @author Pablo Urquía Adrián alu0101398327@ull.edu.es
 * @date 24 de diciembre de 2020
 * @brief El programa escribe en un fichero las n (número que tu le das) siguientes fechas a una dada en un
 *        fichero de salida también dado, todo ello por la línea de comandos.
 * @bug No hay bugs conocidos
 * 
 */
  
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "fechas.funciones.h"



int main (int argc, char *argv[]){
  Usage(argc,argv);
  int day = atoi (argv[1]);
  int month = atoi(argv[2]);
  int year = atoi(argv[3]);
  int number = atoi(argv[4]);
  std::string text = (argv[5]);
  Date fecha = Date(day, month, year, text);
  Fecha (day, month, year, number, text);
}