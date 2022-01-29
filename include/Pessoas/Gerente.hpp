#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "./Funcionario.hpp"
using namespace std;

class Gerente : private Funcionario{
    private:
        double _bonificacao;

    public:
        void print();
        Gerente(double salarioBase, string Idade, string nome, int rgFunc,double bonificacao);
        Gerente() = default;
        void setBonificao(double novaBonificacao);
        double getBonificacao();
        double getSalarioBase();
        double calcularTotal();
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

