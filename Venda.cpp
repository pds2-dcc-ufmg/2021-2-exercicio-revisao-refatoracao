#include "Venda.hpp"

void Venda::print() {

    std::cout << "Especialista: ";
    cout << _especialista._nome;

    std::cout << " Cliente: ";
    cout << _cliente._nome;
}