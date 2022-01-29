#include "Funcionario.hpp"

Funcionario::Funcionario(double salarioBase, std::string idade, std::string nome, int rgFunc){
    this->salarioBase = salarioBase;
    this->idade = idade;
    this->nome = nome;
    this->rgFunc = rgFunc;
}

Funcionario::Funcionario(){

}

Funcionario::~Funcionario(){}

void Funcionario::print(){

}