#include "Funcionario.hpp"

Funcionario::Funcionario(const string& nome, int idade, int rgFunc, double salarioBase) {
    this->_nome = nome;
    this->_idade = idade;
    this->_rgFunc = rgFunc;
    this->_salarioBase = salarioBase;
}

// void Funcionario::setFuncionario(const string& nome, int idade, int rgFunc, double salarioBase) {
//     this->_nome = nome;
//     this->_idade = idade;
//     this->_rgFunc = rgFunc;
//     this->_salarioBase = salarioBase;
// }

void Funcionario::print(){
    cout << "[Funcionario]" << endl
        << "[Gerente]" << endl
        << "  Nome: " << getNome() << endl
        << "  Idade: " << getIdade() << endl
        << "  RGFunc: " << getRgFunc() << endl;
}
string Funcionario::getNome() {
    return this->_nome;
}

int Funcionario::getIdade() {
    return this->_idade;
}

int Funcionario::getRgFunc() {
    return this->_rgFunc;
}

double Funcionario::getSalarioBase() {
    return this->_salarioBase;
}
