#include "Funcionario.hpp"

std::string Funcionario::getNome(){
    return this->_nome;
}

int Funcionario::getIdade(){
    return this->_idade;
}

int Funcionario::getRgFunc(){
    return this->_rgFunc;
}

double Funcionario::getSalario(){
    return this->_SalarioBase;
}