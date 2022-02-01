#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::print(){
    std::cout << "[Funcionario]" << std::endl
    << "  Idade: " << idade << std::endl
    << "  RGFunc: " << rgFunc << std::endl;
}

double Funcionario::getSalarioBase(){
    return salarioBase;
}

string Funcionario::getIdade(){
    return idade;
}

string Funcionario::getNome(){
    return nome;
}

int Funcionario::getRg(){
    return rgFunc;
}