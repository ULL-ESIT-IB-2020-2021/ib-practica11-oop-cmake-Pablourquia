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

  
  
}

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





int main (int argc, char* argv[]){

  std::string inputfile = (argv[1]);
  std::string outputfile = (argv[2]);
  Racional racional1 ();
  racional1.separateNumbers(inputfile);

}

