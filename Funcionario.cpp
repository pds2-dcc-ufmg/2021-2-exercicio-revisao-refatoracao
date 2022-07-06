#include <iostream>
#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nome, std::string IDADE, int rgFunc, double SalarioBase):
nome(nome), IDADE(IDADE), rgFunc(rgFunc), SalarioBase(SalarioBase) {}

std::string Funcionario::getNome() const {return nome;}

void Funcionario::print() const {
    std::cout << "[Funcionario]" << std::endl
        << "  Idade: " << IDADE << std::endl
        << "  RGFunc: " << rgFunc << std::endl;
}