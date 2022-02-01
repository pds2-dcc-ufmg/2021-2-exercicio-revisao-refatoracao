#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario{
    private:
    double bonificacaoPorVenda = 15.0;

    public:
    Gerente(std::string nome, int idade, int rg, double salario);
    int totalVendas = 0;
    double getBonificacao();
    double getSalarioTotal() override;
    void getDados() const override;
};

#endif

