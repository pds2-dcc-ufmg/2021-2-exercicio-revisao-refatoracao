#include "Funcionario.hpp"

void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  RGFunc: " << this->rgFunc << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salarioBase << std::endl;
}

void Funcionario::printOi() {
    std::cout << "Tchau" << std::endl;
}

std::string Funcionario::getName() {
    return this->nome;
}

double Funcionario::getSalarioBase () {
    return this->salarioBase;
}

int Funcionario::getIdade () {
    return this->idade;
}

unsigned int Funcionario::getRgFunc () {
    return this->rgFunc;
}