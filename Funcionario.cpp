#include <iostream>
#include "Funcionario.hpp"

void Funcionario::print()
{
    cout << "[Funcionario]" << endl
         << "  Idade: " << IDADE << endl
         << "  RGFunc: " << rgFunc << endl;
}

void Funcionario::print_oi()
{
    cout << "Tchau" << endl;
}
