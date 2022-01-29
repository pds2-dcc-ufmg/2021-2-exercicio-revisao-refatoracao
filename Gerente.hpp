#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

static constexpr double VALOR_BONIFICACAO = 15.0;

class Gerente : public Funcionario {
    private:
        double Bonificacao;

    public:
        Gerente(double Salario, std::string Idade,
         std::string Nome, int RgFuncionario, double Bonificacao);
        ~Gerente();


        void Print() override;

        double calculaBonificacaoGerente(int NumTotalVendas);

};

#endif

