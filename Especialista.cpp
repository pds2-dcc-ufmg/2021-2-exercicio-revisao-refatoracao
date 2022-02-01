#include <iostream>
#include <string>
#include "Especialista.hpp"
#include <iomanip>


Especialista::Especialista(std::string nome, int idade, int rg, double salario, std::string especialidade, Gerente* gerente){
    _nome = nome;
    _idade = idade;
    _rg = rg;
    _salario = salario;
    _especialidade = especialidade;
    gerenteDoEspecialista = gerente;
}

void Especialista::setComissao(double ValorVenda) {
    comissao += ValorVenda * _porcentagemComissao;
}

double Especialista::getComissao(){
    return comissao;
}

    double Especialista::getSalarioTotal(){
        return _salario + getComissao();
    }


void Especialista::getDados() const{
    cout << "[Especialista]" << endl;
    cout << "[Funcionario]" << endl
    << "  Idade: " << _idade << endl
    << "  RGFunc: " << _rg << endl
    << "  Nome: " << _nome << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << _salario <<endl;
}
