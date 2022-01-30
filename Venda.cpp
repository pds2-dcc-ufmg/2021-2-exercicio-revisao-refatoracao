#include <iostream>
#include <string>
#include "Venda.hpp"

void Venda::print()
{
    std::cout << "Especialista: " << esp.nome << std::endl
              << "Cliente: " << cliente.nome << std::endl;
}
