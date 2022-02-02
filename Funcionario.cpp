#include "Funcionario.hpp"

Funcionario::Funcionario(double salarioBase, string idade, string nome, int rgFunc){
    this->salarioBase = salarioBase;
    this->idade = idade;
    this->nome = nome;
    this->rgFunc = rgFunc;
};

void Funcionario::printFuncionario() {
    cout << "[Funcionario]" << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl;
};