#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario
{
public:
    Especialista(const std::string &Nome, int Idade, int rgFunc, int NumAtendimentos, double SalarioBase, const std::string &Especialidade, double Comissao);
    std::string Especialidade;
    double CalculaComissao(double ValorVenda);
    void ImprimeDados() const override;
    int getNumAtendimentos() const;
    void addAtendimento();
private:
    int NumAtendimentos = 0;
    double porcentagemComissao = 0.1;
};

#endif
