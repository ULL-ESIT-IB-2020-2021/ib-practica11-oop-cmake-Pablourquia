/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file fechas.funciones.h
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

void Usage(int argc, char *argv[]);
void Fecha(int day, int month, int year, int number, std::string text);

class Date{
 private:
  int day_, month_, year_;
  std::ofstream myfile;
 public:
  Date(int arg1, int arg2, int arg3, std::string text){
    day_ = arg1;
    month_ = arg2;
    year_ = arg3;
    std::string document = text;
    myfile.open(document);
  }

  void setDay (int input){
    day_ = input;
  }
  void setMonth (int input){
    month_ = input;
  }
  void setYear (int input){
    year_ = input;
  }
  int getDay (){
    return day_;
  }
  int getMonth(){
    return month_;
  }
  int getYear(){
    return year_;
  }

  void PrintDate(){
    myfile << day_ << '/' << month_ << '/' << year_ << std::endl;
  }
  bool Bisiesto(){
    if (year_ % 4 ==0){
      return true;
    }
    return false;
  }
};