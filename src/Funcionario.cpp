#include "Funcionario.hpp"

void Funcionario::setNome(std::string nome) {
    this->nome = nome;
}

void Funcionario::setIdade(std::string idade) {
    this->IDADE = idade;
}

void Funcionario::setRgFunc(int rgFunc) {
    this->rgFunc = rgFunc;
}

void Funcionario::setSalarioBase(double SalarioBase) {
    this->SalarioBase = SalarioBase;
}

std::string Funcionario::getNome() {
    return this->nome;
}

std::string Funcionario::getIdade() {
    return this->IDADE;
}

double Funcionario::getSalarioBase() {
    return this->SalarioBase;
}

int Funcionario::getRgFunc() {
    return this->rgFunc;
}

void Funcionario::print() {
    cout << "[Funcionario]" << endl
         << "  Idade: " << IDADE << endl
         << "  RGFunc: " << rgFunc << endl;
}