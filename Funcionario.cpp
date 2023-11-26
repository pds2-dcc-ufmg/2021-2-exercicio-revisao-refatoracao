#include <iostream>
#include <string>
#include "Funcionario.hpp"

Funcionario::Funcionario(const std::string& nome, const std::string& idade, const int& rgFunc, const double& salarioBase) : nome(nome), idade(idade), rgFunc(rgFunc), salarioBase(salarioBase) {}

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
  return salarioBase;
}

void Funcionario::print() {
    cout << "[Funcionario]" << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl;
}

