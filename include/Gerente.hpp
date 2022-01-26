#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"


class Gerente : public Funcionario{
    public:
        Gerente(const std::string& Nome, int Idade, int rgFunc, double SalarioBase);
        double ValorBonificacao = 15.0;
        void ImprimeDados() const override;
        double CalculaBonificacao(int TotalVendas);

};

#endif

