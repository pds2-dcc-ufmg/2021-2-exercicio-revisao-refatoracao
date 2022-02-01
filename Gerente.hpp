#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Gerente : public Funcionario {
    public:

        double getBonificacao();

        void setBonificacao(double bonificacao);

        void imprimeDadosGerente();
        double calculaBonificacaoGerente(int numTotalVendas);

    private:

        double _bonificacao;       

};

#endif
