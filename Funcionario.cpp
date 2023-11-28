#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::print(){
    std::cout << "[Funcionario]" << endl;
    std::cout <<" Nome: " << _nome << endl;
    std::cout<< "  Idade: " << _idade << endl;
    std::cout<< "  RGFunc: " << rgFunc << endl;
}
