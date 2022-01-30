#include <iostream>
#include <string>
#include "Venda.hpp"

void Venda::print()
{
    std::cout << "Especialista: " << esp.nome << endl
              << "Cliente: " << cliente << endl;
}
