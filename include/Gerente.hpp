#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include <istream>

#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario{
    private:
        double _bonificacao;

    public:
        Gerente() {}

        Gerente(string nome, string idade, int rgFunc, double salarioBase):
            Funcionario(nome, idade, rgFunc, salarioBase),
            _bonificacao(0) {}

// Precisoo rever as funoes que apaguei
        void print() const;

        void calculaNovaBonificacao(int numTotalVendas);

        double salarioTotal() const override;

        friend istream& operator>>(istream& in, Gerente& gerente);
};

#endif

