#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"


class Gerente : public Funcionario{
    public:
        Gerente(const std::string& Nome,
        int Idade,
        int rgFunc,
        double SalarioBase);
        double ValorBONIFICACAO = 15.0;
        double bonificacao;
        void print();
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

