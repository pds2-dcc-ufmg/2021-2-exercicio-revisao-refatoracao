#include <iostream>
#include <iomanip>
#include <string>
#include "Funcionario.hpp"

void Funcionario::print(){
    cout << "[Funcionario]" << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl;
}
