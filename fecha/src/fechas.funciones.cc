/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file fechas.funciones.cc
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

void Usage(int argc, char *argv[]) {
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << "Modo de uso: ./fechas dd mm aa N fichero_salida.txt " << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void Fecha (int day, int month, int year, int number, std::string text ){
  Date fecha = Date(day, month, year, text);
  int diasTotales = 30;
  if (fecha.getMonth() == 2 || fecha.getMonth() == 4|| fecha.getMonth() == 6|| fecha.getMonth() == 9 || fecha.getMonth() ==11){
    if (fecha.getMonth()==2){
      if (fecha.Bisiesto()){
        diasTotales = 29;
      }
      else{
        diasTotales = 28;
      }
    }
  }
  else{
    diasTotales = 31;
  }
  for (int i =0;i< number; i++){
    if (fecha.getDay() == diasTotales && fecha.getMonth() == 12){
      fecha.setDay(1);
      fecha.setMonth(1);
      fecha.setYear(fecha.getYear() + 1);
    }
    if (fecha.getDay() == diasTotales){
      fecha.setDay(1);
      fecha.setMonth(fecha.getMonth() + 1);
    }
    else {
      fecha.setDay(fecha.getDay()+ 1);
    }
    fecha.PrintDate();
  } 
}