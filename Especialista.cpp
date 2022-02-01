#include <iostream>
#include <string>
#include "Especialista.hpp"

using namespace std;

const double perc = 0.1;
const double percWanda = 0.1;

Especialista::Especialista(double salarioBase, int idade, string nome, int rgFunc, string especialidade) : Funcionario(salarioBase, idade, nome, rgFunc)
{
    this->especialidade = especialidade;
    this->numAtendimentos = 0;
    this->comissao = 0;
}

Especialista::Especialista() : Especialista(0.0, 0, "", 0, ""){};

void Especialista::setComissao(double valorVenda)
{
    this->comissao += valorVenda * perc;
}

void Especialista::setNumeroAtendimentos()
{
    this->numAtendimentos++;
}

int Especialista::getNumeroAntendimento()
{
    return this->numAtendimentos;
}

double Especialista::getSalarioTotal()
{
    return this->salarioBase + this->comissao;
}

void Especialista::print()
{
    cout << "[Especialista] " << endl;
    Funcionario::print();
    cout << "  Especialidade: " << this->especialidade << endl
         << "  Numero de atendimentos: " << this->numAtendimentos << endl
         << "  Salario Total " << this->getSalarioTotal() << endl;
}
