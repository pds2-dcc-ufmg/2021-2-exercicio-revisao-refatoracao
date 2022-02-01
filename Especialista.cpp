#include <iostream>
#include <string>
#include "Especialista.hpp"

void Especialista::imprimir()
{
    std::cout << "[Especialista]" << endl;
    Funcionario::imprimir();
    cout << "Num Atendimentos: " << getNumAtendimentos() << endl;
    cout << "Salario Total: " << getSalarioBase() + getComissao() << endl;
}

void Especialista::adicionaVenda(double valor)
{
    comissao += valor * porcentagem;
    numAtendimentos++;
};

void Especialista::alteraComissao(double valorAntigo, double valorNovo)
{
    comissao -= valorAntigo * porcentagem;
    comissao += valorNovo * porcentagem;
}

double Especialista::getComissao()
{
    return comissao;
}

int Especialista::getNumAtendimentos()
{
    return numAtendimentos;
}