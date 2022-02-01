#include <iostream>
#include <string>
#include "../include/Especialista.hpp"
#include "../include/Funcionario.hpp"

using namespace std;

Especialista::Especialista(){}
 
Especialista::Especialista(string _nome, int _idade, string _rg, double _salarioBase, string _especialidade){
        Funcionario::Funcionario(_salarioBase, _idade, _nome, _rg);
        setEspecialidade(_especialidade);
}


void Especialista::printDadosEspecialista() {
        cout << "[Especialista]" << endl;
        Funcionario::printDados();

        cout << "  Nome: " << Funcionario::getNome() << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << Funcionario::getSalarioBase() <<endl;
}

string Especialista::getEspecialidade(){return especialidade;}
void Especialista::setEspecialidade(string _especialidade){especialidade = _especialidade;}

double Especialista::getPercentualComissao(){return percentualComissao;}
void Especialista::setPercentualComissao(double _percentualComissao){percentualComissao = _percentualComissao;}


double Especialista::getComissaoTotal(){return comissaoTotal;}
void Especialista::setComissaoTotal(double valorVenda){
        comissaoTotal += (valorVenda * percentualComissao);

}







