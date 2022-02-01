#include <iostream>
#include <string>
#include "../include/Gerente.hpp"
#include "../include/Funcionario.hpp"

using namespace std;


Gerente::Gerente(string _nome, int _idade, string _rg, double _salarioBase, double _valorBonificacao){
    Funcionario::Funcionario(_salarioBase, _idade, _nome, _rg);
    setValorBonificacao(_valorBonificacao);
}

void Gerente::printDadosGerente() {
    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << Funcionario::getNome() << endl
    << "  Idade: " << Funcionario::getIdade() << endl
    << "  RGFunc: " << Funcionario::getRg()<< endl
     << "  SalarioBase: R$ " << fixed << setprecision(2) << Funcionario::getSalarioBase() <<endl;
}

double Gerente::calcularBonificacao(int quantidadeTotalVendas){
    return quantidadeTotalVendas * valorBonificacao;
}

double Gerente::getValorBonificacao(){return valorBonificacao;}
void   Gerente::setValorBonificacao(double _valorBonificacao){valorBonificacao = _valorBonificacao;}
 