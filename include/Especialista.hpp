#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"


class Especialista : public Funcionario {

    public:
        Especialista(const std::string& Nome, int Idade, int rgFunc, int NumAtendimentos, double SalarioBase, const std::string& Especialidade, double Comissao);
        double perc = 0.1;
        double percWanda = 0.1;
        std::string Especialidade;
        double CalculaComissao(double ValorVenda);
        void ImprimeDados() const override;
        int NumAtendimentos = 0;
};

#endif
