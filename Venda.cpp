#include "Venda.hpp"
#include <iostream>

void Venda::print() const {

    std::cout << "Especialista: ";
    std::cout << esp->GetNome();

    std::cout << " Cliente: ";
    std::cout << cliente;

}
