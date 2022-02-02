#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario
{
public:
    string especialidade;
    double comissao;
    int numAtendimentos;

    Especialista(double salarioBase, int idade, string nome, int rg, string especialidade)
    {
        this->salarioBase = salarioBase;
        this->idade = idade;
        this->nome = nome;
        this->rg = rg;
        this->especialidade = especialidade;
        this->numAtendimentos = 0;
    }

    double calculaComissao(double venda)
    {
        this->comissao += venda * percentual;
    }

    void imprimeInformacoes()
    {

        cout << "[Especialista]" << endl;
        Funcionario::imprimeInformacoes();

        cout << "Num Atendimentos: " << numAtendimentos << endl
             << "Salario Total: " << salarioBase + comissao << endl;
    }

private:
    double percentual = 0.1;
};

#endif
