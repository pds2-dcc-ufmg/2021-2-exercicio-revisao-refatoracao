#include "Funcionario.hpp"

void Funcionario::ImprimeDados() const {
    std::cout << "[Funcionario]" << std::endl
    << "  Idade: " << this->getIdade() << std::endl
    << "  RGFunc: " << rgFunc << std::endl;
}
