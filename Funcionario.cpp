#include "Funcionario.hpp"

void Funcionario::print() {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << "  Idade: " << this->idade << std::endl;
            std::cout << "  RGFunc: " << this->rgfunc << std::endl;
}