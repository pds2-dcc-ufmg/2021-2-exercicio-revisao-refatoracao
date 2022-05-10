#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente : public Funcionario {

    private:
        double BonificacaoAcumulada = 0;
        const double TAXA_BONIFICACAO = 15.0;


    public:

        Gerente(std::string _nome, int _idade, int _rg, double _salariobase);
        void print() const;
        void calcula_BONIFICACAO_GERENTE(int numTOTALVendas);


};

#endif

