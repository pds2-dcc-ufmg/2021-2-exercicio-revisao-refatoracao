#include "Funcionario.hpp"

void Funcionario::print(){
        cout << "[Funcionario]" << endl
             << "  Idade: " << _idade << endl
             << "  RGFunc: " << _RG << endl;
}
void Funcionario::setSalario(double salario){
    this->_salarioBase = salario;
}

void Funcionario::setIdade(string idade){
    this->_idade = idade;
}

void Funcionario::setNome(string nome){
    this->_nome = nome;
}

void Funcionario::setRG(int rg){
    this->_RG = rg;
}

double Funcionario::getSalario(){
    return this->_salarioBase;
}
string Funcionario::getIdade(){
    return this->_idade;

}
string Funcionario::getNome(){
    return this->_nome;

}
int Funcionario::getRG(){
    return this->_RG;

}