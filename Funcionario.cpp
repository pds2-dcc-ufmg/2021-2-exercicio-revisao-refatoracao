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

void Funcionario::setEspecialidade(std::string especialidade){
   this->especialidade = especialidade;
}

std::string Funcionario::getNome(){
   return nome;
}

std::string Funcionario::getIdade(){
   return idade;
}

int Funcionario::getRgFunc(){
   return rgFunc;
}

double Funcionario::getSalarioBase(){
   return SalarioBase;
}

std::string Funcionario::getEspecialidade(){
   return especialidade;
}

void Funcionario::print() {
    
    std::cout << "[Funcionario]\n" << "Nome: " << getNome() << "\nIdade: " << getIdade() << "\nRGFunc: " << getRgFunc() << std::endl;
    std::cout << "\nSalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() << std::endl;
    std::cout << "\nEspecialidade: " << getEspecialidade() << std::endl;
}