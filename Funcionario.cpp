#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Funcionario.hpp"

void Funcionario::print() const{
    cout << "[Funcionario]" << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl;
}
