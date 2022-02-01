#include <iostream>
#include <string>
#include "Funcionario.hpp"

using namespace std;

Funcionario::Funcionario(double salarioBase, int idade, string nome, int rgFunc)
{
    this->salarioBase = salarioBase;
    this->idade = idade;
    this->nome = nome;
    this->rgFunc = rgFunc;
}

void Funcionario::print()
{
    cout
        << "  Nome: " << this->getNome() << endl
        << "  Idade: " << this->getIdade() << endl
        << "  RG: " << this->getRgFunc() << endl;
}

string Funcionario::getNome()
{
    return this->nome;
}

int Funcionario::getIdade()
{
    return this->idade;
}

int Funcionario::getRgFunc()
{
    return this->rgFunc;
}
