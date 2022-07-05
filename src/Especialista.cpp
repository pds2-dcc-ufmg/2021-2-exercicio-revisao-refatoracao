#include <iostream>
#include <string>

#include "Especialista.hpp"

Especialista::Especialista(){}
Especialista::Especialista(string nome, string idade, int rg, double salarioBase, string especialidade) :
    especialidade(especialidade)
{
    this->nome = nome;
    this->idade = idade;
    this->rg = rg;
    this->salario = salarioBase;
    this->salarioTotal = salarioBase;
}

double Especialista::getComissao(double ValorVenda) {
    return ValorVenda*this->percPorVenda;
}

void Especialista::print() {
    cout << "[Especialista]" << endl
         << "[Funcionario]"  << endl
         << "  Idade: "  << idade << endl
         << "  RGFunc: " << rg    << endl
         << "  Nome: "   << nome  << endl
         << "  SalarioBase: R$ "  << fixed << setprecision(2) << salario << endl;
         cout << "Num Atendimentos: " << qtdAtendimentos << endl;
         cout << "Salario Total: " << salarioTotal <<endl;
}

string Especialista::getEspecialidade(){
    return especialidade;
}

void Especialista::setEspecialidade(string especialidade){
    this->especialidade = especialidade;
}

void Especialista::addAtendimento(){
    this->qtdAtendimentos++;
}

int Especialista::getNumAtendimentos(){
    return this->qtdAtendimentos;
}