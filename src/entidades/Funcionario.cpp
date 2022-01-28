#include "Funcionario.hpp"

void Funcionario::setNome(std::string nome) {
    this->_nome = nome;
}

void Funcionario::setSalarioBase(double salario_base) {
    this->_salario_base = salario_base;
}

void Funcionario::setIdade(int idade) {
    this->_idade = idade;
}

void Funcionario::setRgFuncionario(int rg_funcionario) {
    this->_rg_funcionario = rg_funcionario;
}

std::string Funcionario::getNome() {
    return this->_nome;
}

double Funcionario::getSalarioBase() {
    return this->_salario_base;
}

int Funcionario::getIdade() {
    return this->_idade;
}

int Funcionario::getRgFuncionario() {
    return this->_rg_funcionario;
}