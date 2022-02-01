#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::print() {
    
    std::cout << "[Funcionario]\n" << "Nome: " << nome << "\nIdade: " << idade << std::endl;
    std::cout << "\nRGFunc: " << rgFunc << "\nSalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;
}
