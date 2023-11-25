#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

class Gerente {
public:
    double salarioBase; // valor mínimo recebido pelo funcionário
    std::string idade;
    std::string nome;
    int rgFunc;
    double bonificacao;

    static double valorBonificacao;

    void print() const;
    double calculaBonificacaoGerente(int numTotalVendas) const;
};

#endif
