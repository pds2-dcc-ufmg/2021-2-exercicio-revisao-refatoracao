#include <iostream>
#include <iomanip>
#include <string>
#include "Funcionario.hpp"

double Funcionario::getSalarioBase() const{ 
    return salarioBase; 
}

std::string Funcionario::getIdade() const{
    return idade;
}

std::string Funcionario::getNome() const{
    return nome;
}

int Funcionario::getRgFunc() const{
    return rgFunc;
}

void Funcionario::setSalarioBase(double salarioBase) { 
    this->salarioBase = salarioBase; 
}

void Funcionario::setIdade(std::string idade) {
    this->idade = idade;
}

void Funcionario::setNome(std::string nome) {
    this->nome = nome;
}

void Funcionario::setRgFunc(int rgFunc) {
    this->rgFunc = rgFunc;
}


void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  RGFunc: " << this->rgFunc << std::endl;
}

void Funcionario::printTchau(){
    std::cout << "Tchau" << std::endl;
}