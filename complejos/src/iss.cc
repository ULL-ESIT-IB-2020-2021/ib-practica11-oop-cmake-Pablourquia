#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <vector>
#include <sstream>
#include <stdio.h>
#include <cctype>
#include <algorithm>


class kakeru{
 public:
  void quitarEspacios (std::string frase){
    std::string cadenaTodaJunta;
    std::getline(frase.begin(), frase.end(), std::back_inserter(cadenaTodaJunta), [](auto c){return !std::isspace(c);});
    std::cout << cadenaTodaJunta << std::endl;
  }
};

int main(){
    kakeru k;
    k.quitarEspacios("Hola soy Gabriel");
}
