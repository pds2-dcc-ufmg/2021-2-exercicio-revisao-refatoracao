#include "Funcionario.hpp"

void Funcionario::print()
{
    cout << "[Funcionario]" << endl
         << "  Idade: " << idade << endl
         << "  RGFunc: " << rgFunc << endl;
}

void Funcionario::print_tchau()
{
    cout << "Tchau" << endl;
}