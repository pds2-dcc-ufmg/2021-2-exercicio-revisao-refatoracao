#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

class Gerente : public Funcionario {

    private:
        
        double _valorBonificacao = 15.0;
        double _bonificacao = 0;

    public:

        Gerente();    //Construtores
        Gerente(std::string nome, int idade, int rgFunc, int salarioBase);

        void print() override;

        double calculaBonificacaoGerente(int numTotalVendas);

        void setBonificacao(double bonificacao);
};

#endif
