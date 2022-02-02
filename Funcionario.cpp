#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::print(){
    std::cout << "[Funcionario]" << endl;
    std::cout << "  Nome: " << this->nome << endl;
    std::cout << "  Salario Base: R$ " << this->salarioBase << endl;
    std::cout << "  Idade: " << this->idade << endl
    std::cout << "  RGFunc: " << this->rgFunc << endl;
}
double Funcionario::getSalarioBase(){ 
    return this->salarioBase;
}
void Funcionario::setSalarioBase(double salarioBaseNovo){
    this->SalarioBase = salarioBaseNovo;
}
string Funcionario::getIdade(){ 
    return this->idade;
}
void Funcionario::setIdade(string idadeNovo){
    this->idade = idadeNovo;
}

string Funcionario::getNome(){
    return this->nome;
}
void Funcionario::setNome(string nomeNovo){
    this->nome = nomeNovo;
}

int Funcionario::getRgFunc(){ 
    return this->rgFunc;
}
void Funcionario::setRgFunc(string rgFuncNovo){
    this->rgFunc = rgFuncNovo;
}
