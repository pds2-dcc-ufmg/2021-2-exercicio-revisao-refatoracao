#include <iostream>
#include <string>
#include "Funcionario.hpp"
using namespace std;

void Funcionario::print() {
    cout << "[Funcionario]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << IDADE << endl
    << "  RGFunc: " << rgFunc << endl
    << "  SalarioBase: " << SalarioBase << endl;
}
