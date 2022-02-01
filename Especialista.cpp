#include <iostream>
#include <string>
#include "Especialista.hpp"

double Especialista::comissao(double ValorVenda){
    return ValorVenda*perc;
}

double Especialista::getComissao(){
    return valorComissao;
}

void Especialista::addComissao(double argComissao){
    valorComissao += argComissao;
}

unsigned int Especialista::getAtendimentos(){
    return numAtendimentos;
}

void Especialista::addAtendimento(){
    numAtendimentos++;
}

string Especialista::getEspecialidade(){
    return especialidade;
}

void Especialista::print(){

    cout << "[Especialista]" << endl;
    Funcionario::print();

    cout << "  Nome: " << nome << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
}