#include <iostream>
#include <string>

#include "Venda.hpp"

void Venda::print() {
    std::cout << "Especialista: " << esp->nome 
              << " Cliente: " << nomeCliente 
              << " Descricao: " << descricao << endl;
}