#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rg_funcionario << endl;
        }

string Funcionario::getNome() {
    return nome;
}

string Funcionario::getIdade() {
    return idade;
}

int Funcionario::getRg() {
    return rg_funcionario;
}

double Funcionario::getSalarioBase() {
    return salario_base;
}

void Funcionario::setNome(string _nome) {
    this->nome = _nome;
}

void Funcionario::setIdade(string _idade) {
    this->idade = _idade;
}

void Funcionario::setRg(int _rg_funcionario) {
    this->rg_funcionario = _rg_funcionario;
}

void Funcionario::setSalarioBase(double _salario) {
    this->salario_base = _salario;
}




