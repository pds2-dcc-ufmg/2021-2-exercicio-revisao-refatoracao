#include <iostream>
#include <string>
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

void Funcionario::setSalarioBase(double SalarioBase){
   this->SalarioBase = SalarioBase;
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
   return this->SalarioBase;
}

void Funcionario::printFunc() {
    
    std::cout << "[Funcionario]\n" << "Nome: " << getNome() << "\nIdade: " << getIdade() << "\nRGFunc: " << getRgFunc() << std::endl;
    std::cout << "SalarioBase: R$ " << std::setprecision(2) << std::fixed << getSalarioBase() << std::endl;
}