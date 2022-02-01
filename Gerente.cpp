#include <iostream>
#include <string>
#include "Gerente.hpp"

Gerente:: Gerente(std::string nome, int idade, int rg, double salario){
    _nome = nome;
    _idade = idade;
    _rg = rg;
    _salario = salario;
}

void Gerente::getDados() const{
    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << _nome << endl
    << "  Idade: " << _idade << endl
    << "  RGFunc: " << _rg << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << _salario <<endl;
}

double Gerente::getBonificacao(){
    return totalVendas * bonificacaoPorVenda;
}

double Gerente::getSalarioTotal(){
    return _salario + getBonificacao();
}



