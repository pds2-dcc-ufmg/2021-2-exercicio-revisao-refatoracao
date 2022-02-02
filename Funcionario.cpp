#include <iostream>
#include <string>
#include "Funcionario.hpp"
using namespace std;

void Funcionario::print(){
    cout << "[Funcionario]" << endl;
    cout << "  Nome: " << this->nome << endl;
    cout << "  Salario Base: R$ " << this->salarioBase << endl;
    cout << "  Idade: " << this->idade << endl
    cout << "  RGFunc: " << this->rgFunc << endl;
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
