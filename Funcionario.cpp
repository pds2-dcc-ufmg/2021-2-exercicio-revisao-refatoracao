#include <iostream>
#include "Funcionario.hpp"

void Funcionario::setNome(std::string nome){
    this->nome = nome;    
}

void Funcionario::setIdade(std::string idade){
    this->idade = idade;
}

void Funcionario::setRgFunc(int rgFunc){
    this->rgFunc = rgFunc;
}

void Funcionario::setSalarioBase(double salarioBase){
    this->salarioBase = salarioBase;
}

std::string Funcionario::getNome(){
    return this->nome;
}

std::string Funcionario::getIdade(){
    return this->idade;
}

int Funcionario::getRgFunc(){
    return this->rgFunc;
}

double Funcionario::getSalarioBase(){
    return this->salarioBase;
}
