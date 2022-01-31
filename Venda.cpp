#include "Venda.hpp"

void Venda::print () {
    std::cout << "Especialista: " << esp.getName();

    std::cout << " Cliente: " << this->cliente;
}