#include <iostream>
#include <string>

#include "Funcionario.hpp"

string Funcionario::getIdade(){
    return this->idade;
}

int Funcionario::getRg(){
    return this->rg;
}

double Funcionario::getSalario(){
    return this->salario;
}

double Funcionario::getSalarioTotal(){
    return this->salarioTotal;
}

void Funcionario::setIdade(string idade){
    this->idade = idade;
}

void Funcionario::setRg(int rg){
    this->rg = rg;
}

void Funcionario::setSalario(double salario){
    this->salario = salario;
}

void Funcionario::setSalarioTotal(double valorAdicional){
    this->salarioTotal += valorAdicional;
}
