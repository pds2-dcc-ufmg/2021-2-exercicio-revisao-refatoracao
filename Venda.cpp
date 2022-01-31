#include <iostream>
#include <string>

#include "Venda.hpp"

void Venda::print() {
    std::cout << "Especialista: ";
    cout << esp.nome;

    std::cout << " Cliente: ";
    cout << cliente;
}