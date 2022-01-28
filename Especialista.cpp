#include <iostream>
#include <string>
#include "Especialista.hpp"

double Especialista::calculaComissao(double ValorVenda) {

    double c = ValorVenda*porcentagem;
    return c;

}


void Especialista::print() {

    std::cout << "[Especialista]" << endl;
    Funcionario::print();

    std::cout << "  Nome: " << getNome() << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() <<endl;

}

string Especialista::getEspecialidade() {

    return especialidade;

}

int Especialista::getNumAtendimentos() {
    
    return numAtendimentos;

}

int Especialista::somaNumAtendimentos(int soma) {
    
    return numAtendimentos + soma;

}

double Especialista::getComissao() {

    return comissao;

}

double Especialista::somaComissao(double valor) {

    return comissao + valor;

}

Especialista::Especialista(string nome, string idade, int rgFunc, double salarioBase, string especialidade,
                           int numAtendimentos, double comissao, double porcentagem) : 
                            Funcionario(salarioBase, idade, nome, rgFunc) {
    
    this->numAtendimentos = numAtendimentos;
    this->comissao = comissao;
    this->porcentagem = porcentagem;
    this->especialidade = especialidade;

}