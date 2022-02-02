#include <iostream>
#include <string>
#include "Funcionario.hpp"
using namespace std;

void Funcionario::print() {
    cout << "[Funcionario]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rg_func << endl
    << "  SalarioBase: " << salario_base << endl;
}
