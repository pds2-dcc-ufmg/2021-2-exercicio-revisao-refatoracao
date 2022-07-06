#include <iostream>
#include <string>
#include "Venda.hpp"

void Venda::print() {
    std::cout << "Especialista: " << especialista.nome;
    std::cout << " Cliente: " << cliente;
}