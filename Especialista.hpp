#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario
{

public:
    Especialista(string nome, int idade, int rg, double salarioBase, string especialidade, double porcentagem) : 
    Funcionario(nome, idade, rg, salarioBase), especialidade(especialidade), porcentagem(porcentagem), numAtendimentos(0), comissao(0) {};
    void adicionaVenda(double valor);
    void alteraComissao(double valorAntigo, double valorNovo);
    double calcularComissao(double valorVenda);
    double getComissao();
    int getNumAtendimentos();
    void imprimir();

private:
    string especialidade;
    double porcentagem;
    int numAtendimentos;
    double comissao;
};

#endif
