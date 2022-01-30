#include <iostream>
#include <string>
#include "Funcionario.hpp"

Funcionario::Funcionario(double SalarioBase, string idade, string nome, int rgFunc){
    this->SalarioBase = SalarioBase;
    this->idade = idade;
    this->NOME = nome;
    this->rgFunc = rgFunc;
}

void Funcionario::print() {
    cout << "[Funcionario]" << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl;
}

void Funcionario::print_oi(){

    cout << "Tchau" << endl;
    
}