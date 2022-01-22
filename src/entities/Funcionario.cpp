#include "Funcionario.hpp"

void Funcionario::print() {
  std::cout << "[Funcionario]" << std::endl
  << "  Idade: " << this->idade << std::endl
  << "  RGFunc: " << this->rgFunc << std::endl;
}

void Funcionario::print_tchau() {
  std::cout << "Tchau" << std::endl;
}