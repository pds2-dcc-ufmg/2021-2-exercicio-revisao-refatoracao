#include "Venda.hpp"
#include <iostream>
#include <string>

void Venda::print() {

    std::cout << "Especialista: ";
    cout << esp.get_Nome();

    std::cout << " Cliente: ";
    cout << this->cliente;

}