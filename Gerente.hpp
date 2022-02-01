#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

#define ValorBonificacao 15.0;
using namespace std;

class Gerente: public Funcionario {
    public:
    double GetBonificacao();
    void Print();
    void CalculaBonificacaoGerente(int NumTotalVendas);
    private:
    double Bonificacao;
};

#endif

