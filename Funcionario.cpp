#include "Funcionario.hpp"

using namespace std;

Funcionario::~Funcionario() {
}

void Funcionario::setSalarioBase(double salario) {
    this->SalarioBase = salario;
}
double Funcionario::getSalarioBase() {
    return this->SalarioBase;
}

void Funcionario::setNome(string nome) {
    this->Nome = nome;
}
string Funcionario::getNome() {
    return this->Nome;
}

void Funcionario::setIdade(string idade) {
    this->Idade = idade;
}
string Funcionario::getIdade() {
    return this->Idade;
}

void Funcionario::setRg(string rg) {
    this->Rg = rg;
}
string Funcionario::getRg() {
    return this->Rg;
}

void Funcionario::print() {
}
