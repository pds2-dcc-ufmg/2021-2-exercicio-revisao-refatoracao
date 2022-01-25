#include "Venda.hpp"

void Venda::print() {
    std::cout << "Especialista: ";
    std::cout << this->especialista.nome;

    std::cout << " Cliente: ";
    std::cout << this->cliente;
}
