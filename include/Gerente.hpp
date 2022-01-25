#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include <assert.h>

#include "Funcionario.hpp"

class Gerente : public Funcionario{
private:
    const double VALOR_BONUS_POR_VENDA = 15.0;

public:
    Gerente() {}
    Gerente(std::string nome, std::string idade, std::string rgFunc, double salario_base);

    void print();
    double calculaBonificacaoTotal(int total_vendas);
    double calculaSalarioTotal(int total_vendas);

    double getBonificacao();
};

#endif // !GERENTE_HPP