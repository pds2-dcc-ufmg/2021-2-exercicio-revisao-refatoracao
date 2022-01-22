#include "Funcionario.hpp"

void Funcionario::print() {
  std::cout << "[Funcionario]" << std::endl
  << "  Idade: " << IDADE << std::endl
  << "  RGFunc: " << rgFunc << std::endl;
}

void Funcionario::print_tchau() {
  std::cout << "Tchau" << std::endl;
}