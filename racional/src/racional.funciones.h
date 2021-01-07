/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file racional.funciones.h
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
#ifndef racional.funciones.h
#define racional.funciones.h


class Racional{
 private: 
  int numerator, denominator;
  int intermediate = 0;
  std::string n1 = "";
  std::string n2 = "";
 public:
  Racional(int number1, int number2, std::string outputfile){
    numerator = number1;
    denominator = number2;
    std::string document = outputfile;
    std::ifstream myfile (document);
    myfile.open(document);
  }
  void setNumerator(int input){
    numerator = input;
  }
  void setDenominator(int input){
    denominator = input;
  }
  int getNumerator(){
    return numerator;
  }
  int getDenominator(){
    return denominator;
  }
  int separateNumbers (std::string inputfile){
    int count;
    std::ifstream inputFileStream(inputfile);
    inputFileStream >> count;
    inputFileStream.ignore(1, '\n');
    for(int i = 1; i < count + 1; i++){
        std::string line;
        std::getline(inputFileStream, line);
        std::istringstream lineStream(line);
        std::string rac1, rac2, rac3, rac4;
        std::getline(lineStream, rac1, '|');
        std::getline(lineStream, rac2, '|');
        std::getline(lineStream, rac3, '|');
        std::getline(lineStream, rac4, '|');
        
        std::cout << "Racional number 1:  " << rac1 << std::endl;
        std::cout << "Racional number 2:  " << rac2 << std::endl;
        std::cout << "Racional number 3:  " << rac3 << std::endl;
        std::cout << "Racional number 4:  " << rac4 << std::endl;

        std::vector<std::string> num_denom;
        std::vector<int> output;
        num_denom.emplace_back(rac1);
        num_denom.emplace_back(rac2);
        num_denom.emplace_back(rac3);
        num_denom.emplace_back(rac4);

        for (std::string element: num_denom){
            int num, denom;
            std::replace(element.begin(), element.end(), '/', ' ');
            std::stringstream ss(element);
            while(ss >> num && ss >> denom){
              

            }
        }
    }
    
  }

  
  
};
Racional subtract (Racional racional1, Racional racional2);
Racional multiplication (Racional racional1, Racional racional2);
Racional division (Racional racional1, Racional racional2);
Racional comparation (Racional racional1, Racional racional2);

#endif

