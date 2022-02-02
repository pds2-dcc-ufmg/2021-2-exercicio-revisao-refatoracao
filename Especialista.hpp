#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario
{

private:
    std::string Especialidade;
    int NumAtendimentos;
    double Comissao;

public:
    Especialista (std::string Nome, std::string Idades, int RG, double SalarioBase, std::string Especialidade, int NumAtendimentos, double Comissao);
    double comissao(double ValorVenda);
    void Print();
    void AddComissao(double Valor);
    void AddAtendimento();
    int get_NumAtendimentos();
    double get_Comissao();

static double perc;
static double percWanda;
};

#endif
